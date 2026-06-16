#pragma once
#include "Persona.h"
using namespace System;
namespace Modelo {
    public ref class Usuario :
        public Persona
    {
    private:
        String^ usuario;
        String^ contrasena;
        String^ perfil;

    public:
        Usuario();
        Usuario(String^ nombre, String^ cedula, String^ correo, String^ usuario, String^ contrasena, String^ perfil);

        // Getters y setters 
        String^ GetUsuario();
        void SetUsuario(String^ valor);

        String^ GetContrasena();
        void SetContrasena(String^ valor);

        String^ GetPerfil();
        void SetPerfil(String^ valor);
        //Metodos compara usuario y contraseña recibidos contra los propios
        bool ValidarCredenciales(String^ usuarioIngresado, String^ contrasenaIngresada);
    };
}

