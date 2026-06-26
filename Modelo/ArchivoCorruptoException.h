#pragma once
#include <exception>
#include <string>

using namespace std;

namespace Modelo {

    class ArchivoCorruptoException : public exception
    {
    private:
        string mensaje;

    public:
        ArchivoCorruptoException(const string& rutaArchivo)
        {
            mensaje = "Error: El archivo no es un JPG valido o esta daniado: " + rutaArchivo;
        }

        const char* what() const noexcept override
        {
            return mensaje.c_str();
        }
    };
}