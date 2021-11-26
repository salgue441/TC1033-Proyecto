#ifndef DRIFT_H
#define DRIFT_H

#include "vehiculo.h"

class Drift : public Vehiculo
{
private:
    std::string trasmicion_vehiculo;

public:
    /* ---- Constructor ---- */
    Drift(std::string nombre, int llantas, int asientos, int pilotos, int ID, float peso, 
        std::string trasmicion) :
        Vehiculo(nombre, llantas, asientos, pilotos, ID, peso), trasmicion_vehiculo(trasmicion) {};

    /* ---- getter y setter ---- */
    std::string get_trasmicion();
    void set_trasmicion(std::string );

    /* ---- Funciones ---- */
    std::string es_apto_para_drift(std::string );
};

/* ---- Llenado de getter y setter ---- */
std::string Drift::get_trasmicion() { return trasmicion_vehiculo; }
void Drift::set_trasmicion(std::string trasmicion) { trasmicion_vehiculo = trasmicion; }

/* ---- Funciones ---- */
std::string Drift::es_apto_para_drift(std::string trasmicion)
{
    std::string result = "";
    int op;

    std::cout << "Tipo de trasmición: " << trasmicion << std::endl;
    std::cout << "El vehículo es 4 x 4? \t1. Si \t2. No: ";
    std::cin >> op; 

    // condicional
    if (op == 1 && (trasmicion == "Manual" || trasmicion == "manual"))
        result = "El carro es para hacer drift!";
    else if (op == 2 && (trasmicion == "Manual" || trasmicion == "manual"))
        result = "El carro puede ser apto para hacer drift pero no es recomendado";
    else
        result = "El carro no es apto para hacer drift";

    return result;
}

#endif // !DRIFT_H
