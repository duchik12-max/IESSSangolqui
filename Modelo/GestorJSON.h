#pragma once
#include "Usuario.h"

using namespace System;
using namespace System::Collections::Generic;

namespace Modelo {

    // Encargada de leer el archivo JSON y convertir cada registro
    // en un objeto Usuario (que ya contiene los datos heredados de Persona).
    public ref class GestorJSON
    {
    private:
        String^ rutaArchivo;

    public:
        GestorJSON();
        GestorJSON(String^ rutaArchivo);

        String^ GetRutaArchivo();
        void SetRutaArchivo(String^ valor);

        // Lee el archivo JSON completo y devuelve la lista de usuarios.
        // Si el archivo no existe o esta mal formado, devuelve una lista vacia.
        List<Usuario^>^ CargarUsuarios();

        // Busca un usuario por su nombre de usuario dentro de la lista cargada.
        // Devuelve nullptr si no lo encuentra.
        Usuario^ BuscarPorUsuario(String^ nombreUsuario);
    };
}

