#pragma once
#include <string>
#include <vector>
#include <nlohmann/json.hpp>

using namespace std;
using json = nlohmann::json;
namespace Modelo {
    class Archivo
    {
    private:
        string nombreArchivo;
        string descripcion;

    public:
        Archivo(const string nnombre, const string ndescripcion);
        ~Archivo();

        string getNombreArchivo() const;
        string getDescripcion() const;

        bool abrirArchivo(string narchivo);
        void leerTexto();

        bool leerJSON(json& objetoSalida);
        bool guardarJSON(const json& objetoEntrada);

        bool leerCSV(vector<string>& lineasSalida);
        void guardarCSV(const vector<string>& lineasEntrada);

        // Agrega una sola linea al final del archivo de texto o CSV
        void guardarTexto(const string nuevoContenido);
    };
}