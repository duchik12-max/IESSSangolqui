#pragma once
#include "Persona.h"
#include <string>

using namespace std;

namespace Modelo {

    class Trabajador : public Persona
    {
    protected:
        string apellido;
        int edad;
        string horaInicio;
        string horaFin;
        string dia;
        string area;

    public:
        Trabajador();
        Trabajador(string nombre, string apellido, int edad,
            string horaInicio, string horaFin, string dia, string area);

        string getApellido() const;
        void setApellido(string valor);

        int getEdad() const;
        void setEdad(int valor);

        string getHoraInicio() const;
        void setHoraInicio(string valor);

        string getHoraFin() const;
        void setHoraFin(string valor);

        string getDia() const;
        void setDia(string valor);

        string getArea() const;
        void setArea(string valor);
    };
}

