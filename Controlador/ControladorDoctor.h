#pragma once
#include "../Modelo/Archivo.h"
#include "../Modelo/Doctor.h"
#include <string>
#include <vector>

using namespace std;
using namespace Modelo;

namespace Controlador {

    class ControladorDoctor
    {
    private:
        Archivo* archivoCsv;
        string carpetaFotos;
        // Convierte una linea CSV en un objeto Doctor
        Doctor parsearLinea(const string& linea);

    public:
        ControladorDoctor(const string& rutaCsv, const string& carpetaFotos);
        ~ControladorDoctor();

        // Guarda un doctor: copia la foto y agrega la linea al CSV, lanza la excepcion si la foto no es valida
        bool guardarDoctor(const string& nombre, const string& especialidad,const string& rutaFotoOrigen);

        vector<Doctor> cargarDoctores();
    };
}

