#pragma once
#include "Persona.h"
#include <string>

using namespace std;

namespace Modelo {

    class Usuario : public Persona
    {
    protected:
        string usuario;
        string contrasena;
        string perfil;
        bool estado;

    public:
        Usuario();
        Usuario(string nombre, string cedula, string correo,
            string usuario, string contrasena, string perfil, bool estado);

        string getUsuario() const;
        void setUsuario(string valor);

        string getContrasena() const;
        void setContrasena(string valor);

        string getPerfil() const;
        void setPerfil(string valor);

        bool getEstado() const;
        void setEstado(bool valor);

        bool ValidarCredenciales(string usuarioIngresado, string contrasenaIngresada) const;
    };
}

