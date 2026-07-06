#include "pch.h"
#include "Trabajador.h"

using namespace Modelo;

Trabajador::Trabajador() : Persona()
{
	this->apellido = "";
	this->edad = 0;
    this->horaInicio = "";
    this->horaFin = "";
    this->dia = "";
    this->area = "";
}

Trabajador::Trabajador(string nombre, string apellido, int edad,
    string horaInicio, string horaFin, string dia, string area)
    : Persona(nombre, "", "")
{
    this->apellido = apellido;
    this->edad = edad;
    this->horaInicio = horaInicio;
    this->horaFin = horaFin;
    this->dia = dia;
    this->area = area;
}

string Trabajador::getApellido() const {
    return this->apellido; 
}
void Trabajador::setApellido(string valor) { 
    this->apellido = valor; 
}

int Trabajador::getEdad() const {
    return this->edad; 
}
void Trabajador::setEdad(int valor) {
    this->edad = valor; 
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