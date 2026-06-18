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
        bool asistencia;

    public:
        Paciente();
        Paciente(String^ nombre, String^ cedula, String^ correo,
            String^ id, DateTime fechaConsulta, bool asistencia);

        String^ GetId();
        void SetId(String^ valor);

        DateTime GetFechaConsulta();
        void SetFechaConsulta(DateTime valor);

		bool GetAsistencia();
		void SetAsistencia(bool valor);
    };
}
