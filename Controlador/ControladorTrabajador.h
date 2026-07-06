#pragma once
#include "../Modelo/Archivo.h"
#include "../Modelo/Trabajador.h"
#include <string>
#include <vector>
using namespace std;
using namespace Modelo;
namespace Controlador
{
	class ControladorTrabajador
	{
    private:
        Archivo* archivoCsv;
        Trabajador parsearLinea(const string& linea);
        // Validaciones
        bool validarNombre(const string& texto);
        bool validarEdad(int edad);
    public:
        ControladorTrabajador(const string& rutaCsv);
        ~ControladorTrabajador();

        //guarda un objeto trabajador en el CSV.
        string guardarTrabajador(const string& nombre, const string& apellido,int edad,
            const string& horaInicio,const string& horaFin, const string& dia, const string& area);

        vector<Trabajador> cargarTrabajadores();
        Trabajador* buscarHorario(const string& nombre, const string& apellido, const string& dia);
	};
}

