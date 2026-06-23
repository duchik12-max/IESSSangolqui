#pragma once
#include "../Modelo/Archivo.h"
#include "../Modelo/Usuario.h"
#include <string>
#include <vector>

using namespace std;
using namespace Modelo;

namespace Controlador {

    // Resultado del intento de login. Todo nativo, sin String^.
    struct ResultadoLogin
    {
        bool exitoso;
        string perfil;
        string nombreUsuario;   // para el MessageBox de bienvenida en Vista
        string mensajeError;

        ResultadoLogin()
        {
            exitoso = false;
            perfil = "";
            nombreUsuario = "";
            mensajeError = "";
        }
    };

    class ControladorLogin
    {
    private:
        Archivo* archivo;

        vector<Usuario> cargarUsuarios();
        bool buscarUsuario(const string& nombreUsuario, Usuario& usuarioSalida);

    public:
        ControladorLogin(const string& rutaArchivoJson);
        ~ControladorLogin();

        // Devuelve puntero; el llamador es responsable de hacer delete
        ResultadoLogin* validarLogin(const string& usuarioIngresado,
            const string& contrasenaIngresada);
    };
}