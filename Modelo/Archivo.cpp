#include "pch.h"
#include "Archivo.h"
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>
namespace Modelo {
    using namespace std;
    using json = nlohmann::json;

    Archivo::Archivo(const string nnombre, const string ndescripcion)
    {
        this->nombreArchivo = nnombre;
        this->descripcion = ndescripcion;
    }

    Archivo::~Archivo() {}

    string Archivo::getNombreArchivo() const
    {
        return this->nombreArchivo;
    }

    string Archivo::getDescripcion() const
    {
        return this->descripcion;
    }

    bool Archivo::abrirArchivo(string narchivo)
    {
        ifstream archivo(narchivo);
        if (!archivo.is_open())
        {
            cout << "Error al abrir el archivo: " << narchivo << endl;
            return false;
        }
        archivo.close();
        return true;
    }

    void Archivo::leerTexto()
    {
        ifstream archivo(this->nombreArchivo);
        if (archivo.is_open())
        {
            string linea;
            cout << "----Contenido de " << this->getNombreArchivo() << "-----" << endl;
            while (getline(archivo, linea))
            {
                cout << linea << endl;
            }
            cout << "-----------------" << endl;
            archivo.close();
        }
        else
        {
            cout << "Error: No se pudo abrir el archivo para lectura." << endl;
        }
    }

    bool Archivo::leerJSON(json& objetoSalida)
    {
        ifstream archivo(this->nombreArchivo);
        if (archivo.is_open())
        {
            try
            {
                archivo >> objetoSalida;
                archivo.close();
                return true;
            }
            catch (json::parse_error& e)
            {
                cout << "Error al parsear el JSON: " << e.what() << endl;
                archivo.close();
                return false;
            }
        }
        return false;
    }

    bool Archivo::guardarJSON(const json& objetoEntrada)
    {
        ofstream archivo(this->nombreArchivo);
        if (archivo.is_open())
        {
            archivo << objetoEntrada.dump(2);
            archivo.close();
            return true;
        }
        return false;
    }

    bool Archivo::leerCSV(vector<string>& lineasSalida)
    {
        ifstream archivo(this->nombreArchivo);
        string linea;
        if (archivo.is_open())
        {
            while (getline(archivo, linea))
            {
                if (!linea.empty())
                {
                    lineasSalida.push_back(linea);
                }
            }
            archivo.close();
            return true;
        }
        return false;
    }

    // Agrega una sola linea al final del archivo (modo append).
    // Si el archivo no existe, lo crea automaticamente.
    void Archivo::guardarTexto(const string nuevoContenido)
    {
        ofstream archivo(this->nombreArchivo, ios::app);
        if (archivo.is_open())
        {
            archivo << nuevoContenido << "\n";
            archivo.close();
        }
        else
        {
            cout << "Error: No se pudo abrir el archivo para escritura." << endl;
        }
    }

    // reescribe el archivo CSV con las lineas recibidas.
    // Si el archivo no existe, lo crea. Si existia, borra su contenido anterior.
    void Archivo::guardarCSV(const vector<string>& lineasEntrada)
    {
        ofstream archivo(this->nombreArchivo);
        if (archivo.is_open())
        {
            for (const string& linea : lineasEntrada)
            {
                archivo << linea << "\n";
            }
            archivo.close();
        }
        else
        {
            cout << "Error: No se pudo abrir el archivo CSV para escritura." << endl;
        }
    }
    //definicion de los nuevos metodos para las imagenes jpg
    void Archivo::verificarImagenJPG(const string& rutaOrigen)
    {
        // Verificar existencia
        ifstream archivo(rutaOrigen, ios::binary);
        if (!archivo.is_open())
        {
            throw ArchivoNoEncontradoException(rutaOrigen);
        }

        // Verificar firma JPG: primeros 3 bytes deben ser FF D8 FF
        unsigned char firma[3];
        archivo.read(reinterpret_cast<char*>(firma), 3);
        archivo.close();

        if (firma[0] != 0xFF || firma[1] != 0xD8 || firma[2] != 0xFF)
        {
            throw ArchivoCorruptoException(rutaOrigen);
        }
    }

    bool Archivo::copiarImagenJPG(const string& rutaOrigen, const string& rutaDestino)
    {
        // Lanza excepcion si no existe o esta corrupto
        verificarImagenJPG(rutaOrigen);

        ifstream origen(rutaOrigen, ios::binary);
        ofstream destino(rutaDestino, ios::binary);

        if (!origen.is_open() || !destino.is_open())
            return false;

        destino << origen.rdbuf();

        origen.close();
        destino.close();
        return true;
    }
}