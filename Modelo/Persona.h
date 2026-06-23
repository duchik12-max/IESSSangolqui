#pragma once
#include <string>
using namespace std;

namespace Modelo {

    class Persona
    {
    protected:
        string nombre;
        string cedula;
        string correo;

    public:
        Persona();
        Persona(string nombre, string cedula, string correo);
        virtual ~Persona();

        string getNombre() const;
        void setNombre(string valor);

        string getCedula() const;
        void setCedula(string valor);

        string getCorreo() const;
        void setCorreo(string valor);
    };
}

