#include "pch.h"
#include "Usuario.h"

using namespace Modelo;

Usuario::Usuario() : Persona()
{
    this->usuario = "";
    this->contrasena = "";
    this->perfil = "";
    this->estado = false;
}

Usuario::Usuario(string nombre, string cedula, string correo,string usuario, string contrasena, string perfil, bool estado)
    : Persona(nombre, cedula, correo)
{
    this->usuario = usuario;
    this->contrasena = contrasena;
    this->perfil = perfil;
    this->estado = estado;
}

string Usuario::getUsuario() const {
    return this->usuario; 
}
void Usuario::setUsuario(string valor) {
    this->usuario = valor; 
}

string Usuario::getContrasena() const {
    return this->contrasena; 
}
void Usuario::setContrasena(string valor) {
    this->contrasena = valor; 
}

string Usuario::getPerfil() const {
    return this->perfil; 
}
void Usuario::setPerfil(string valor) {
    this->perfil = valor; 
}

bool Usuario::getEstado() const {
    return this->estado; 
}
void Usuario::setEstado(bool valor) {
    this->estado = valor; 
}

bool Usuario::ValidarCredenciales(string usuarioIngresado, string contrasenaIngresada) const
{
    return this->usuario == usuarioIngresado && this->contrasena == contrasenaIngresada;
}