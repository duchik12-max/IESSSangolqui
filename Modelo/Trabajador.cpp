#include "pch.h"
#include "Trabajador.h"
using namespace Modelo;

Trabajador::Trabajador() : Persona()
{
    this->numIdentificador = String::Empty;
    this->area = String::Empty;
    this->tarea = String::Empty;
}

Trabajador::Trabajador(String^ nombre, String^ cedula, String^ correo,
    String^ numIdentificador, String^ area, String^ tarea)
    : Persona(nombre, cedula, correo)
{
    this->numIdentificador = numIdentificador;
    this->area = area;
    this->tarea = tarea;
}

String^ Trabajador::GetNumIdentificador()
{
    return this->numIdentificador;
}

void Trabajador::SetNumIdentificador(String^ valor)
{
    this->numIdentificador = valor;
}

String^ Trabajador::GetArea()
{
    return this->area;
}

void Trabajador::SetArea(String^ valor)
{
    this->area = valor;
}

String^ Trabajador::GetTarea()
{
    return this->tarea;
}

void Trabajador::SetTarea(String^ valor)
{
    this->tarea = valor;
}