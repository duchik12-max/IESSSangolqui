#include "pch.h"
#include "Usuario.h"
using namespace Modelo;

Usuario::Usuario() : Persona()
{
    this->usuario = String::Empty;
    this->contrasena = String::Empty;
    this->perfil = String::Empty;
}

Usuario::Usuario(String^ nombre, String^ cedula, String^ correo,
    String^ usuario, String^ contrasena, String^ perfil)
    : Persona(nombre, cedula, correo)
{
    this->usuario = usuario;
    this->contrasena = contrasena;
    this->perfil = perfil;
}

String^ Usuario::GetUsuario()
{
    return this->usuario;
}

void Usuario::SetUsuario(String^ valor)
{
    this->usuario = valor;
}

String^ Usuario::GetContrasena()
{
    return this->contrasena;
}

void Usuario::SetContrasena(String^ valor)
{
    this->contrasena = valor;
}

String^ Usuario::GetPerfil()
{
    return this->perfil;
}

void Usuario::SetPerfil(String^ valor)
{
    this->perfil = valor;
}

bool Usuario::ValidarCredenciales(String^ usuarioIngresado, String^ contrasenaIngresada)
{
    if (usuarioIngresado == nullptr || contrasenaIngresada == nullptr)
        return false;

    return this->usuario->Equals(usuarioIngresado) &&
        this->contrasena->Equals(contrasenaIngresada);
}