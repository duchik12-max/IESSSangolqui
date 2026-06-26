#pragma once
#include <exception>
#include <string>

using namespace std;

namespace Modelo {

    class ArchivoNoEncontradoException : public exception
    {
    private:
        string mensaje;

    public:
        ArchivoNoEncontradoException(const string& rutaArchivo)
        {
            mensaje = "Error: El archivo de imagen no fue encontrado en la ruta: " + rutaArchivo;
        }

        const char* what() const noexcept override
        {
            return mensaje.c_str();
        }
    };
}