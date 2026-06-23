#include "pch.h"
#include "Persona.h"

using namespace Modelo;

Persona::Persona()
{
    this->nombre = "";
    this->cedula = "";
    this->correo = "";
}

Persona::Persona(string nombre, string cedula, string correo)
{
    this->nombre = nombre;
    this->cedula = cedula;
    this->correo = correo;
}

Persona::~Persona() {}

string Persona::getNombre() const {
    return this->nombre;
}
void Persona::setNombre(string valor) {
    this->nombre = valor;
}

string Persona::getCedula() const {
    return this->cedula; 
}
void Persona::setCedula(string valor) {
    this->cedula = valor; 
}

string Persona::getCorreo() const {
    return this->correo; 
}
void Persona::setCorreo(string valor) {
    this->correo = valor; 
}