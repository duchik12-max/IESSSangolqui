#pragma once
#include "Persona.h"
#include <string>

using namespace std;

namespace Modelo {

    // No se utiliza todavia; metodos pendientes de definir.
    class Paciente : public Persona
    {
    protected:
        string id;
        string fechaConsulta;   // Se maneja como string "dd/MM/yyyy" para evitar DateTime administrado
        bool asistencia;

    public:
        Paciente();
        Paciente(string nombre, string cedula, string correo,string id, string fechaConsulta, bool asistencia);

        string getId() const;
        void setId(string valor);

        string getFechaConsulta() const;
        void setFechaConsulta(string valor);

        bool getAsistencia() const;
        void setAsistencia(bool valor);
    };
}
