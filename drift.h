#include <iostream>
#include "vehiculo.h"

class Drift : public Vehiculo
{
public:
    /* ---- Constructor ---- */
    Drift(std::string nombre, int llantas, int asientos, int piloto, int identificador) : 
        Vehiculo(nombre, llantas, asientos, piloto, identificador) { };
    
    /* ---- Funciones ---- */
    std::string es_apto_para_drift(std::string );
};

std::string Drift::es_apto_para_drift(std::string opcion)
{
    std::string result; 
    int op;

    std::cout << "Seleccione el tipo de trasmición: 1. Manual \t2. Automático: ";
    std::cin >> op;

    std::cout << "[parametro] El vehiculo es 4 x 4?" << std::endl;

    // condicionales
    if (op == 1 && (opcion == "si" || opcion == "Si"))
        result = "El carro es apto para hacer drift!";
    else if (op == 2 && (opcion == "si" || opcion == "Si"))
        result = "El carro puede ser apto para hacer drift pero no es recomendable";
    else 
        result = "El carro no es pato para hacer drift";
    
    return result;
}
