#pragma once
#include "../Modelo/Archivo.h"
#include "../Modelo/Usuario.h"
#include <string>
#include <vector>
using namespace std;
using namespace Modelo;
namespace Controlador {
	class ControladorUsuario
	{
    private:
        Archivo* archivoJson;
        vector<Usuario> cargarUsuarios();
        bool guardarUsuarios(const vector<Usuario>& lista);

        // Validaciones
        bool validarCedula(const string& cedula);
        bool validarCorreo(const string& correo);
        bool validarLongitudMinima(const string& texto, int minimo);

    public:
        ControladorUsuario(const string& rutaJson);
        ~ControladorUsuario();
		//Opciones de administrador
        //registrar nuevo usuario
        string registrarUsuario(const string& nombre, const string& cedula,
            const string& correo, const string& perfil,
            const string& usuario, const string& contrasena);
        //busqueda por cedula
        Usuario* buscarPorCedula(const string& cedula);
		//bloquear usuario por nombre de usuario comprobando si ya estaba bloqueado o no
        vector<Usuario> cargarUsuariosSinAdmin();
        int bloquearUsuario(const string& nombreUsuario);
	};
}

