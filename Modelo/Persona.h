#pragma once
using namespace System;
namespace Modelo {
    // Clase base
    public ref class Persona
    {
    protected:
        String^ nombre;
        String^ cedula;
        String^ correo;

    public:
        Persona();
        Persona(String^ nombre, String^ cedula, String^ correo);
        virtual ~Persona();

        // Getters y setters
        String^ GetNombre();
        void SetNombre(String^ valor);

        String^ GetCedula();
        void SetCedula(String^ valor);

        String^ GetCorreo();
        void SetCorreo(String^ valor);
    };
}

