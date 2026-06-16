#pragma once
#include "Persona.h"
using namespace System;
namespace Modelo {
    public ref class Trabajador :
        public Persona
    {
    private:
        String^ numIdentificador;
        String^ area;
        String^ tarea;

    public:
        Trabajador();
        Trabajador(String^ nombre, String^ cedula, String^ correo,
            String^ numIdentificador, String^ area, String^ tarea);

        String^ GetNumIdentificador();
        void SetNumIdentificador(String^ valor);

        String^ GetArea();
        void SetArea(String^ valor);

        String^ GetTarea();
        void SetTarea(String^ valor);
    };
}

