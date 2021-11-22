#pragma once
#include <string>

class Vehiculo
{
protected:
    int num_llantas, num_asientos, num_piloto, num_vehiculo;
    std::string modelo_vehiculo;

public:
    /* ---- Constructores ---- */
    Vehiculo() : modelo_vehiculo(""), num_llantas(4), 
        num_asientos(1), num_piloto(1), num_vehiculo(1) { };

    Vehiculo(std::string modelo, int llantas, int asientos, int piloto, int identificador) : 
        modelo_vehiculo(modelo), num_llantas(llantas), num_asientos(asientos), num_piloto(piloto),
        num_vehiculo(identificador) { };

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
    int get_piloto();
    void set_piloto(int );

    // para identificador
    int get_id();
    void set_id(int ); 
};

/* ---- Llenado de getters y setters ---- */
std::string Vehiculo::get_modelo() { return modelo_vehiculo; }
void Vehiculo::set_modelo(std::string modelo) { modelo_vehiculo = modelo; }

int Vehiculo::get_llantas() { return num_llantas; }
void Vehiculo::set_llantas(int llantas) { num_llantas = llantas; }

int Vehiculo::get_asientos() { return num_asientos; }
void Vehiculo::set_asientos(int asientos) { num_asientos = asientos; }

int Vehiculo::get_piloto() { return num_piloto; }
void Vehiculo::set_piloto(int piloto) { num_piloto = piloto; }

int Vehiculo::get_id() { return num_vehiculo; }
void Vehiculo::set_id(int identificador) { num_vehiculo = identificador; }