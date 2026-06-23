#include "pch.h"

#include "ControladorLogin.h"

using namespace Controlador;
using json = nlohmann::json;

ControladorLogin::ControladorLogin(const string& rutaArchivoJson)
{
    this->archivo = new Archivo(rutaArchivoJson, "Archivo de usuarios del sistema");
}

ControladorLogin::~ControladorLogin()
{
    delete this->archivo;
}

vector<Usuario> ControladorLogin::cargarUsuarios()
{
    vector<Usuario> lista;
    json datos;

    if (!this->archivo->leerJSON(datos))
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

            lista.push_back(Usuario(nombre, cedula, correo,
                usuario, contrasena, perfil, estado));
        }
        catch (...)
        {
            continue;
        }
    }

    return lista;
}

bool ControladorLogin::buscarUsuario(const string& nombreUsuario, Usuario& usuarioSalida)
{
    vector<Usuario> lista = cargarUsuarios();

    for (const Usuario& u : lista)
    {
        if (u.getUsuario() == nombreUsuario)
        {
            usuarioSalida = u;
            return true;
        }
    }
    return false;
}

ResultadoLogin *ControladorLogin::validarLogin(const string& usuarioIngresado,
    const string& contrasenaIngresada)
{
    ResultadoLogin *resultado = new ResultadoLogin();

    if (usuarioIngresado.empty() || contrasenaIngresada.empty())
    {
        resultado->mensajeError = "Debe ingresar usuario y contrasena";
        return resultado;
    }

    Usuario encontrado;
    if (!buscarUsuario(usuarioIngresado, encontrado))
    {
        resultado->mensajeError = "Usuario o contrasena incorrectos";
        return resultado;
    }

    if (!encontrado.ValidarCredenciales(usuarioIngresado, contrasenaIngresada))
    {
        resultado->mensajeError = "Usuario o contrasena incorrectos";
        return resultado;
    }

    if (!encontrado.getEstado())
    {
        resultado->mensajeError = "El usuario se encuentra bloqueado";
        return resultado;
    }

    resultado->exitoso = true;
    resultado->perfil = encontrado.getPerfil();
    resultado->nombreUsuario = encontrado.getNombre();
    return resultado;
}