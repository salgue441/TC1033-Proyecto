#include <iostream>

class Rally
{
private:
    std::string modelo_vehiculo;
    int num_llantas, num_de_vehiculo, num_pilotos;
    float peso_vehiculo;

public:
    // constructor default
    Rally() : modelo_vehiculo("None"), num_llantas(4), num_de_vehiculo(0), num_pilotos(1), peso_vehiculo(1230) { }; 
    // custom constructor
    Rally(std::string modelo, int llantas, int numero, int pilotos, float peso) :
         modelo_vehiculo(modelo), num_llantas(llantas), num_de_vehiculo(numero), num_pilotos(pilotos), 
         peso_vehiculo(peso) { };

    /* ---- setters y getters ---- */
    // para modelo
    void set_modelo(std::string );
    std::string get_modelo();

    // para llantas
    void set_llantas(int );
    int get_llantas();

    // para num-vehículo
    void set_numero(int );
    int get_numero();

    // para num-pilotos
    void set_pilotos(int );
    int get_pilotos();

    // para peso del vehículo
    void set_peso(float );
    float get_peso();
};

/* ---- llenando los getters y setters ---- */
// para modelo_vehiculo
void Rally::set_modelo(std::string modelo) { modelo_vehiculo = modelo; }
std::string Rally::get_modelo() { return modelo_vehiculo; }

// para llantas
void Rally::set_llantas(int llantas) { num_llantas = llantas; }
int Rally::get_llantas() { return num_llantas; }

// para num_vehículo
void Rally::set_numero(int numero) { num_de_vehiculo = numero; }
int Rally::get_numero() { return num_de_vehiculo; }

// para num-pilotos
void Rally::set_pilotos(int pilotos) { num_pilotos = pilotos; }
int Rally::get_pilotos() { return num_pilotos; }

// para peso del vehículo
void Rally::set_peso(float peso) { peso_vehiculo = peso; }
float Rally::get_peso() { return peso_vehiculo; }

