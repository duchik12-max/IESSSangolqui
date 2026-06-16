#pragma once


using namespace System;
using namespace Modelo;
namespace Controlador {

    // Resultado de un intento de inicio de sesion.
    // Se usa en vez de lanzar excepciones para distinguir
    // entre "credenciales invalidas" y "perfil reconocido".
    public ref class ResultadoLogin
    {
    public:
        bool exitoso;
        String^ perfil;
        Modelo::Usuario^ usuario;

        ResultadoLogin()
        {
            exitoso = false;
            perfil = String::Empty;
            usuario = nullptr;
        }
    };

    public ref class ControladorLogin
    {
    private:
        Modelo::GestorJSON^ gestorJson;

    public:
        ControladorLogin();
        ControladorLogin(String^ rutaArchivoJson);

        // Valida usuario y contrasena contra el archivo JSON.
        // Devuelve un ResultadoLogin con el perfil si las credenciales coinciden.
        ResultadoLogin^ ValidarLogin(String^ usuarioIngresado, String^ contrasenaIngresada);
    };
}