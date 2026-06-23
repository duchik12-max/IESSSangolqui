#pragma once
#include "Persona.h"
#include <string>

using namespace std;

namespace Modelo {

    class Trabajador : public Persona
    {
    protected:
        string horaInicio;
        string horaFin;
        string dia;
        string area;

    public:
        Trabajador();
        Trabajador(string nombre, string cedula, string correo,
            string horaInicio, string horaFin, string dia, string area);

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

