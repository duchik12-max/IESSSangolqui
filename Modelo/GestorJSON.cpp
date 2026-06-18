#include "pch.h"
#include <fstream>
#include <string>
#include <nlohmann/json.hpp>
#include <msclr/marshal_cppstd.h>
#include "GestorJSON.h"

using namespace Modelo;
using json = nlohmann::json;
using namespace msclr::interop;

GestorJSON::GestorJSON()
{
    // Ruta por defecto: carpeta de la solucion, archivo usuarios.json
    this->rutaArchivo = "usuarios.json";
}

GestorJSON::GestorJSON(String^ rutaArchivo)
{
    this->rutaArchivo = rutaArchivo;
}

String^ GestorJSON::GetRutaArchivo()
{
    return this->rutaArchivo;
}

void GestorJSON::SetRutaArchivo(String^ valor)
{
    this->rutaArchivo = valor;
}

List<Usuario^>^ GestorJSON::CargarUsuarios()
{
    List<Usuario^>^ listaUsuarios = gcnew List<Usuario^>();

    // Convertir la ruta administrada (String^) a std::string nativo
    String^ rutaTemp = this->rutaArchivo;
    std::string rutaNativa = marshal_as<std::string>(rutaTemp);

    std::ifstream archivo(rutaNativa);
    if (!archivo.is_open())
    {
        // El archivo no existe o no se pudo abrir; se devuelve lista vacia
        return listaUsuarios;
    }

    json datosJson;
    try
    {
        archivo >> datosJson;
    }
    catch (const json::parse_error&)
    {
        archivo.close();
        return listaUsuarios;
    }
    archivo.close();

    // Se espera un arreglo de objetos en el JSON, por ejemplo:
    // [ { "nombre": "...", "cedula": "...", "correo": "...",
    //     "usuario": "...", "contrasena": "...", "perfil": "..." }, ... ]
    if (!datosJson.is_array())
    {
        return listaUsuarios;
    }

    for (const auto& registro : datosJson)
    {
        try
        {
            std::string nombreStd = registro.value("nombre", "");
            std::string cedulaStd = registro.value("cedula", "");
            std::string correoStd = registro.value("correo", "");
            std::string usuarioStd = registro.value("usuario", "");
            std::string contrasenaStd = registro.value("contrasena", "");
            std::string perfilStd = registro.value("perfil", "");
            bool estadoValor = registro.value("estado", false);

            // Conversion de std::string (nativo) a String^ (administrado)
            String^ nombre = marshal_as<String^>(nombreStd);
            String^ cedula = marshal_as<String^>(cedulaStd);
            String^ correo = marshal_as<String^>(correoStd);
            String^ usuario = marshal_as<String^>(usuarioStd);
            String^ contrasena = marshal_as<String^>(contrasenaStd);
            String^ perfil = marshal_as<String^>(perfilStd);

            Usuario^ nuevoUsuario = gcnew Usuario(nombre, cedula, correo, usuario, contrasena, perfil, estadoValor);

            listaUsuarios->Add(nuevoUsuario);
        }
        catch (...)
        {
            // Si un registro individual esta mal formado, se omite y se continua
            continue;
        }
    }

    return listaUsuarios;
}

Usuario^ GestorJSON::BuscarPorUsuario(String^ nombreUsuario)
{
    List<Usuario^>^ usuarios = this->CargarUsuarios();

    for each (Usuario ^ u in usuarios)
    {
        if (u->GetUsuario()->Equals(nombreUsuario))
        {
            return u;
        }
    }

    return nullptr;
}