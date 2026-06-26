#include "pch.h"
#include "Doctor.h"
using namespace Modelo;

Doctor::Doctor() : Persona()
{
    this->especialidad = "";
    this->rutaFoto = "";
}

Doctor::Doctor(string nombre, string cedula, string correo,string especialidad, string rutaFoto)
    : Persona(nombre, cedula, correo)
{
    this->especialidad = especialidad;
    this->rutaFoto = rutaFoto;
}

string Doctor::getEspecialidad() const {
    return this->especialidad; 
}
void Doctor::setEspecialidad(string nespecialidad) {
    this->especialidad = nespecialidad; 
}

string Doctor::getRutaFoto() const {
    return this->rutaFoto; 
}
void Doctor::setRutaFoto(string nruta) {
    this->rutaFoto = nruta; 
}