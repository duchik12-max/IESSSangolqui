#include "pch.h"
#include "Persona.h"
using namespace Modelo;
//constructor, destrcutor
Persona::Persona()
{
    this->nombre = String::Empty;
    this->cedula = String::Empty;
    this->correo = String::Empty;
}

Persona::Persona(String^ nombre, String^ cedula, String^ correo)
{
    this->nombre = nombre;
    this->cedula = cedula;
    this->correo = correo;
}

Persona::~Persona()
{
}
//setter getter
String^ Persona::GetNombre()
{
    return this->nombre;
}

void Persona::SetNombre(String^ valor)
{
    this->nombre = valor;
}

String^ Persona::GetCedula()
{
    return this->cedula;
}

void Persona::SetCedula(String^ valor)
{
    this->cedula = valor;
}

String^ Persona::GetCorreo()
{
    return this->correo;
}

void Persona::SetCorreo(String^ valor)
{
    this->correo = valor;
}