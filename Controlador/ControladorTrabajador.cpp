#include "pch.h"
#include "ControladorTrabajador.h"
#include <sstream>
using namespace Controlador;

ControladorTrabajador::ControladorTrabajador(const string& rutaCsv)
{
    this->archivoCsv = new Archivo(rutaCsv, "Archivo de horarios");
}

ControladorTrabajador::~ControladorTrabajador()
{
    delete this->archivoCsv;
}
//convierte una linea del archivo CSV en un objeto Trabajador
Trabajador ControladorTrabajador::parsearLinea(const string& linea)
{
    // Formato CSV: nombre,apellido,edad,horaInicio,horaFin,dia,area
    stringstream ss(linea);
    string nombre, apellido, edadStr, horaInicio, horaFin, dia, area;

    getline(ss, nombre, ',');
    getline(ss, apellido, ',');
    getline(ss, edadStr, ',');
    getline(ss, horaInicio, ',');
    getline(ss, horaFin, ',');
    getline(ss, dia, ',');
    getline(ss, area, ',');

    int edad = 0;
    try { edad = stoi(edadStr); }
    catch (...) { edad = 0; }

    return Trabajador(nombre, apellido, edad, horaInicio, horaFin, dia, area);
}
//validaciones
bool ControladorTrabajador::validarNombre(const string& texto)
{
    //que no este vacio y que no contenga numeros
    if (texto.empty()) return false;
    for (char c : texto)
    {
        if (isdigit(c)) return false;
    }
    return true;
}
//edad entre 18 y 70 supongo que mas edad seria iracional
bool ControladorTrabajador::validarEdad(int edad)
{
    return edad >= 18 && edad <= 70;
}
//guarda un trabajador en el archivo CSV, avisa con un mensaje si falla
string ControladorTrabajador::guardarTrabajador(const string& nombre, const string& apellido,
    int edad, const string& horaInicio,
    const string& horaFin, const string& dia,
    const string& area)
{
    if (!validarNombre(nombre))
        return "El nombre no debe contener numeros.";

    if (!validarNombre(apellido))
        return "El apellido no debe contener numeros.";

    if (!validarEdad(edad))
        return "La edad debe estar entre 18 y 70 anos.";

    // Formato CSV: nombre,apellido,edad,horaInicio,horaFin,dia,area
    string linea = nombre + "," + apellido + "," + to_string(edad) + "," +
        horaInicio + "," + horaFin + "," + dia + "," + area;

    this->archivoCsv->guardarTexto(linea);
    return "";
}
//carga todos los trabajadores del CSV
vector<Trabajador> ControladorTrabajador::cargarTrabajadores()
{
    vector<Trabajador> lista;
    vector<string> lineas;

    if (!this->archivoCsv->leerCSV(lineas))
        return lista;

    for (const string& linea : lineas)
    {
        if (!linea.empty())
            lista.push_back(parsearLinea(linea));
    }

    return lista;
}
//metodo para la pantalla busquedaHorariosForm, busca por el nombre,apellido y dia
//creo que asi habra solo 1 coincidencia o sino bueno solo devuelve la primera
Trabajador* ControladorTrabajador::buscarHorario(const string& nombre,
    const string& apellido,
    const string& dia)
{
    vector<Trabajador> lista = cargarTrabajadores();

    for (const Trabajador& t : lista)
    {
        if (t.getNombre() == nombre &&
            t.getApellido() == apellido &&
            t.getDia() == dia)
        {
            return new Trabajador(t);
        }
    }

    return nullptr;
}