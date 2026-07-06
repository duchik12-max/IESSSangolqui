#include "pch.h"
#include <nlohmann/json.hpp>
#include "ControladorUsuario.h"

//nota: al parecer se puede guardar en orden el JSON y no alfabeticamente como lo hace ahora
//se usa, using json = nlohmann::ordered_json; pero no me convence
using namespace Controlador;
using json = nlohmann::json;

ControladorUsuario::ControladorUsuario(const string& rutaJson)
{
    this->archivoJson = new Archivo(rutaJson, "Archivo de usuarios");
}

ControladorUsuario::~ControladorUsuario()
{
    delete this->archivoJson;
}

vector<Usuario> ControladorUsuario::cargarUsuarios()
{
    vector<Usuario> lista;
    json datos;
    if (!this->archivoJson->leerJSON(datos))
        return lista;

    if (!datos.is_array())
        return lista;

    for (const auto& reg : datos)
    {
        try
        {
            string nombre = reg.value("nombre", "");
            string cedula = reg.value("cedula", "");
            string correo = reg.value("correo", "");
            string usuario = reg.value("usuario", "");
            string contrasena = reg.value("contrasena", "");
            string perfil = reg.value("perfil", "");
            bool estado = reg.value("estado", false);

            lista.push_back(Usuario(nombre, cedula, correo,usuario, contrasena, perfil, estado));
        }
        catch (...) { continue; }
    }
    return lista;
}
//Opciones de administrador
//Actualiza el usuario nuevo y guarda el archivo JSON
bool ControladorUsuario::guardarUsuarios(const vector<Usuario>& lista)
{
    json arreglo = json::array();

    for (const Usuario& u : lista)
    {
        json obj;
        obj["nombre"] = u.getNombre();
        obj["cedula"] = u.getCedula();
        obj["correo"] = u.getCorreo();
        obj["usuario"] = u.getUsuario();
        obj["contrasena"] = u.getContrasena();
        obj["perfil"] = u.getPerfil();
        obj["estado"] = u.getEstado();
        arreglo.push_back(obj);
    }

    return this->archivoJson->guardarJSON(arreglo);
}
//validacion de la cedula, la verdad nose si hace falta
bool ControladorUsuario::validarCedula(const string& cedula)
{
    if (cedula.length() != 10)
        return false;

    for (char c : cedula)
        if (!isdigit(c)) return false;

    // algoritmo de validacion de cedula buscado en internet
    int provincia = stoi(cedula.substr(0, 2));
    if (provincia < 1 || provincia > 24)
        return false;

    int suma = 0;
    for (int i = 0; i < 9; i++)
    {
        int digito = cedula[i] - '0';
        if (i % 2 == 0)
        {
            digito *= 2;
            if (digito > 9) digito -= 9;
        }
        suma += digito;
    }

    int digitoVerificador = (10 - (suma % 10)) % 10;
    return digitoVerificador == (cedula[9] - '0');
}
//validacion el correo debe tener una @ y el dominio debe terminar en .com
bool ControladorUsuario::validarCorreo(const string& correo)
{
    size_t posArroba = correo.find('@');
    if (posArroba == string::npos || posArroba == 0)
        return false;

    string dominio = correo.substr(posArroba + 1);
    if (dominio.length() < 5)
        return false;

    // Verificar que termina en .com
    string sufijo = ".com";
    if (dominio.length() < sufijo.length())
        return false;

    return dominio.substr(dominio.length() - sufijo.length()) == sufijo;
}

bool ControladorUsuario::validarLongitudMinima(const string& texto, int minimo)
{
    return (int)texto.length() >= minimo;
}
//registro del nuevo usuario
string ControladorUsuario::registrarUsuario(const string& nombre, const string& cedula,
    const string& correo, const string& perfil,
    const string& usuario, const string& contrasena)
{
    // validaciones
    if (nombre.empty() || cedula.empty() || correo.empty() ||
        perfil.empty() || usuario.empty() || contrasena.empty())
        return "Todos los campos son obligatorios.";

    if (!validarCedula(cedula))
        return "La cedula ingresada no es valida.";

    if (!validarCorreo(correo))
        return "El correo debe contener @ y terminar en .com";

    if (!validarLongitudMinima(usuario, 4))
        return "El usuario debe tener al menos 4 caracteres.";

    if (!validarLongitudMinima(contrasena, 4))
        return "La contrasena debe tener al menos 4 caracteres.";

    // verificar que el usuario no exista ya
    vector<Usuario> lista = cargarUsuarios();
    for (const Usuario& u : lista)
    {
        if (u.getUsuario() == usuario)
            return "El nombre de usuario ya esta en uso.";

        if (u.getCedula() == cedula)
            return "Ya existe un usuario con esa cedula.";
    }

    // agregar nuevo usuario con estado true por defecto
    lista.push_back(Usuario(nombre, cedula, correo,
        usuario, contrasena, perfil, true));

    if (!guardarUsuarios(lista))
        return "Error al guardar en el archivo JSON.";

    return "";
}
//busqueda del usuario por cedula
Usuario* ControladorUsuario::buscarPorCedula(const string& cedula)
{
    vector<Usuario> lista = cargarUsuarios();

    for (const Usuario& u : lista)
    {
        if (u.getCedula() == cedula)
            return new Usuario(u);
    }

    return nullptr;
}
//carga de usuarios del archivo JSON sin los usuarios de perfil Administrador
vector<Usuario> ControladorUsuario::cargarUsuariosSinAdmin()
{
    vector<Usuario> lista = cargarUsuarios();
    vector<Usuario> filtrada;

    for (const Usuario& u : lista)
    {
        if (u.getPerfil() != "Administrador")
            filtrada.push_back(u);
    }

    return filtrada;
}
//metodo para el bloqueo de los usarios cambiando la varibale booleana de estado
int ControladorUsuario::bloquearUsuario(const string& nombreUsuario)
{
    vector<Usuario> lista = cargarUsuarios();
    bool encontrado = false;

    for (Usuario& u : lista)
    {
        if (u.getUsuario() == nombreUsuario)
        {
            encontrado = true;
            if (!u.getEstado())
                return 1; // ya estaba bloqueado

            u.setEstado(false);
            guardarUsuarios(lista);
            return 0; // bloqueado exitosamente
        }
    }

    return -1; // no encontrado
}