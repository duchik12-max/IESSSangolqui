#include "pch.h"
#include "ControladorDoctor.h"
#include <sstream>

using namespace Controlador;

ControladorDoctor::ControladorDoctor(const string& rutaCsv, const string& carpetaFotos)
{
    this->archivoCsv = new Archivo(rutaCsv, "Archivo de doctores");
    this->carpetaFotos = carpetaFotos;
}

ControladorDoctor::~ControladorDoctor()
{
    delete this->archivoCsv;
}

Doctor ControladorDoctor::parsearLinea(const string& linea)
{
    // Formato CSV: nombre,especialidad,rutaFoto
    stringstream ss(linea);
    string nombre, especialidad, rutaFoto;

    getline(ss, nombre, ',');
    getline(ss, especialidad, ',');
    getline(ss, rutaFoto, ',');

    return Doctor(nombre, "", "", especialidad, rutaFoto);
}

bool ControladorDoctor::guardarDoctor(const string& nombre, const string& especialidad,const string& rutaFotoOrigen)
{
    // Construir nombre de archivo destino usando el nombre del doctor
    // Se reemplazan espacios por guiones bajos para evitar problemas en rutas
    string nombreArchivo = nombre;
    for (char& c : nombreArchivo)
        if (c == ' ') c = '_';

    string rutaDestino = this->carpetaFotos + "\\" + nombreArchivo + ".jpg";

    // Esto lanza excepcion si la foto no existe o esta corrupta
    Archivo archivoTemp(rutaFotoOrigen, "Foto temporal");
    archivoTemp.copiarImagenJPG(rutaFotoOrigen, rutaDestino);

    // Guardar linea en CSV: nombre,especialidad,rutaFoto
    string lineaCsv = nombre + "," + especialidad + "," + rutaDestino;
    this->archivoCsv->guardarTexto(lineaCsv);

    return true;
}

vector<Doctor> ControladorDoctor::cargarDoctores()
{
    vector<Doctor> lista;
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