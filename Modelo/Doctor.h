#pragma once
#include "Persona.h"
#include <string>

using namespace std;

namespace Modelo {

    class Doctor : public Persona
    {
    protected:
        string especialidad;
        string rutaFoto;

    public:
        Doctor();
        Doctor(string nombre, string cedula, string correo,
            string especialidad, string rutaFoto);

        string getEspecialidad() const;
        void setEspecialidad(string nespecialidad);

        string getRutaFoto() const;
        void setRutaFoto(string nruta);
    };
}

