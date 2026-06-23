#include "pch.h"
#include "Trabajador.h"

using namespace Modelo;

Trabajador::Trabajador() : Persona()
{
    this->horaInicio = "";
    this->horaFin = "";
    this->dia = "";
    this->area = "";
}

Trabajador::Trabajador(string nombre, string cedula, string correo,string horaInicio, string horaFin, string dia, string area)
    : Persona(nombre, cedula, correo)
{
    this->horaInicio = horaInicio;
    this->horaFin = horaFin;
    this->dia = dia;
    this->area = area;
}

string Trabajador::getHoraInicio() const {
    return this->horaInicio; 
}
void Trabajador::setHoraInicio(string valor) {
    this->horaInicio = valor; 
}

string Trabajador::getHoraFin() const {
    return this->horaFin; 
}
void Trabajador::setHoraFin (string valor) {
    this->horaFin = valor;
}

string Trabajador::getDia() const {
    return this->dia;
}
void Trabajador::setDia(string valor) {
    this->dia = valor;
}

string Trabajador::getArea() const {
    return this->area;
}
void Trabajador::setArea(string valor) {
    this->area = valor;
}