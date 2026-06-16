#pragma once
#include "Persona.h"
using namespace System;
namespace Modelo {
    public ref class Paciente :
        public Persona
    {
    private:
        String^ id;
        DateTime fechaConsulta;
        String^ estado;

    public:
        Paciente();
        Paciente(String^ nombre, String^ cedula, String^ correo,
            String^ id, DateTime fechaConsulta, String^ estado);

        String^ GetId();
        void SetId(String^ valor);

        DateTime GetFechaConsulta();
        void SetFechaConsulta(DateTime valor);

        String^ GetEstado();
        void SetEstado(String^ valor);
    };
}
