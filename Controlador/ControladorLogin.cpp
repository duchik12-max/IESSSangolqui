#include "pch.h"
#include "ControladorLogin.h"

using namespace Controlador;
using namespace Modelo;

ControladorLogin::ControladorLogin()
{
    // Ruta por defecto, en la carpeta de la solucion
    this->gestorJson = gcnew GestorJSON("usuarios.json");
}

ControladorLogin::ControladorLogin(String^ rutaArchivoJson)
{
    this->gestorJson = gcnew GestorJSON(rutaArchivoJson);
}

ResultadoLogin^ ControladorLogin::ValidarLogin(String^ usuarioIngresado, String^ contrasenaIngresada)
{
    ResultadoLogin^ resultado = gcnew ResultadoLogin();

    if (usuarioIngresado == nullptr || contrasenaIngresada == nullptr ||
        usuarioIngresado->Trim()->Equals(String::Empty) ||
        contrasenaIngresada->Trim()->Equals(String::Empty))
    {
        resultado->exitoso = false;
        return resultado;
    }

    Usuario^ usuarioEncontrado = this->gestorJson->BuscarPorUsuario(usuarioIngresado);

    if (usuarioEncontrado == nullptr)
    {
        resultado->exitoso = false;
        return resultado;
    }

    if (usuarioEncontrado->ValidarCredenciales(usuarioIngresado, contrasenaIngresada))
    {
        resultado->exitoso = true;
        resultado->perfil = usuarioEncontrado->GetPerfil();
        resultado->usuario = usuarioEncontrado;
    }
    else
    {
        resultado->exitoso = false;
    }

    return resultado;
}