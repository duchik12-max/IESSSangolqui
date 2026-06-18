#include "pch.h"
#include "Paciente.h"
using namespace Modelo;

Paciente::Paciente() : Persona()
{
    this->id = String::Empty;
    this->fechaConsulta = DateTime::Now;
    this->asistencia = false;
}

Paciente::Paciente(String^ nombre, String^ cedula, String^ correo,String^ id, DateTime fechaConsulta, bool asistencia)
    : Persona(nombre, cedula, correo)
{
    this->id = id;
    this->fechaConsulta = fechaConsulta;
    this->asistencia = asistencia;
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

bool Paciente::GetAsistencia()
{
	return this->asistencia;
}
void Paciente::SetAsistencia(bool valor)
{
	this->asistencia = valor;
}