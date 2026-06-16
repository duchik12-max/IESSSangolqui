#include "pch.h"
#include "Paciente.h"
using namespace Modelo;

Paciente::Paciente() : Persona()
{
    this->id = String::Empty;
    this->fechaConsulta = DateTime::Now;
    this->estado = String::Empty;
}

Paciente::Paciente(String^ nombre, String^ cedula, String^ correo,
    String^ id, DateTime fechaConsulta, String^ estado)
    : Persona(nombre, cedula, correo)
{
    this->id = id;
    this->fechaConsulta = fechaConsulta;
    this->estado = estado;
}
// Setters y getters
String^ Paciente::GetId()
{
    return this->id;
}

void Paciente::SetId(String^ valor)
{
    this->id = valor;
}

DateTime Paciente::GetFechaConsulta()
{
    return this->fechaConsulta;
}

void Paciente::SetFechaConsulta(DateTime valor)
{
    this->fechaConsulta = valor;
}

String^ Paciente::GetEstado()
{
    return this->estado;
}

void Paciente::SetEstado(String^ valor)
{
    this->estado = valor;
}