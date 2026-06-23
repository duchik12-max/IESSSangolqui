#include "pch.h"
#include "Paciente.h"

using namespace Modelo;

Paciente::Paciente() : Persona()
{
    this->id = "";
    this->fechaConsulta = "";
    this->asistencia = false;
}

Paciente::Paciente(string nombre, string cedula, string correo,
    string id, string fechaConsulta, bool asistencia)
    : Persona(nombre, cedula, correo)
{
    this->id = id;
    this->fechaConsulta = fechaConsulta;
    this->asistencia = asistencia;
}

string Paciente::getId() const {
    return this->id; 
}
void Paciente::setId(string valor) {
    this->id = valor; 
}

string Paciente::getFechaConsulta() const {
    return this->fechaConsulta; 
}
void Paciente::setFechaConsulta(string valor) {
    this->fechaConsulta = valor; 
}

bool Paciente::getAsistencia() const {
    return this->asistencia; 
}
void Paciente::setAsistencia(bool valor) {
    this->asistencia = valor; 
}