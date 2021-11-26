#ifndef VEHICULO_H
#define VEHICULO_H

#include <iostream>
#include "Piloto.h"

class Vehiculo
{
protected:
    int num_llantas, num_asientos, num_piloto, num_vehiculo;
    std::string modelo_vehiculo;
    float peso_vehiculo;
    Piloto p1;

public:
    /* ---- Constructores ---- */
    Vehiculo() : modelo_vehiculo("None"), num_llantas(4), num_asientos(1), num_piloto(1), 
                                                                           num_vehiculo(1),
                                                                           peso_vehiculo(0) {}; 

    Vehiculo(std::string modelo, int llantas, int asientos, int pilotos, int vehiculo, float peso) : 
        modelo_vehiculo(modelo), num_llantas(llantas), num_asientos(asientos), 
        num_piloto(pilotos), num_vehiculo(vehiculo), peso_vehiculo(peso) { };
        
    /* ---- Getters y setters ---- */
    // para modelo
    std::string get_modelo();
    void set_modelo(std::string );

    // para llantas
    int get_llantas();
    void set_llantas(int );

    // para asientos
    int get_asientos();
    void set_asientos(int );

    // para piloto
    int get_num_piloto();
    void set_num_piloto(int );

    // para identificador
    int get_id();
    void set_id(int ); 

    // para piloto
    Piloto get_piloto();
    void set_piloto(Piloto );

    // para peso
    float get_peso();
    void set_peso(float );

    /* ---- Funcion ---- */
    void crea_piloto(std::string , std::string , int , int);
};

/* ---- Llenado de getters y setters ---- */
// para modelo
std::string Vehiculo::get_modelo() { return modelo_vehiculo; }
void Vehiculo::set_modelo(std::string modelo) { modelo_vehiculo = modelo; }

// para llantas
int Vehiculo::get_llantas() { return num_llantas; }
void Vehiculo::set_llantas(int llantas) { num_llantas = llantas; }

// para asientos
int Vehiculo::get_asientos() { return num_asientos; }
void Vehiculo::set_asientos(int asientos) { num_asientos = asientos; }

// para num_piloto (numero de pilotos)
int Vehiculo::get_num_piloto() { return num_piloto; }
void Vehiculo::set_num_piloto(int piloto) { num_piloto = piloto; }

// para num_vehiculo (identificador vehiculo)
int Vehiculo::get_id() { return num_vehiculo; }
void Vehiculo::set_id(int identificador) { num_vehiculo = identificador; }

// para peso
float Vehiculo::get_peso() { return peso_vehiculo; }
void Vehiculo::set_peso(float peso) { peso_vehiculo = peso; }

// para el objeto de Piloto
Piloto Vehiculo::get_piloto() { return p1; }
void Vehiculo::set_piloto(Piloto pilot) { p1 = pilot; }

/* ---- Función ---- */
// Función que crea un piloto dentro de la clase
void Vehiculo::crea_piloto(std::string nombre, std::string pais, int edad, int ID)
{
    Piloto piloto1(nombre, pais, edad, ID);
    p1 = piloto1;
}

#endif // !VEHICULO_H
