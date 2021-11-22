#include <iostream>
#include "formula.h"
#include "drift.h"
#include "rally.h"

int main()
{
    /* ---- Objeto de clase fórmula ---- */
    Formula f1("Askari KZ1", 4, 1, 1, 120);
    std::cout << "Datos del objeto: \n" << "Modelo del vehículo: " << f1.get_modelo() << "\n" 
              << "Número de llantas: " << f1.get_llantas() << "\n" 
              << "Número de asientos: " << f1.get_asientos() << "\n"
              << "Número de pilotos: " << f1.get_piloto() << "\n" 
              << "Número identificador: " << f1.get_id() << std::endl;

    f1.calcula_peso_con_piloto_y_gasolina(752, 80, 110); 

    // agregando y verificando el nombre de la escudería
    f1.agrega_escuderia("Mercedes AMG F1");
    std::cout << "La escudería ingresada fue encontrada (Si = 1, No = 0): " 
              << f1.verifica_escuderia("Mercedes AMG F1") << std::endl;

    // agregando y verificando el nombre del piloto
    f1.agrega_piloto("Lewis Hamilton");
    std::cout << "El nombre del piloto ingresado fue encontrado (Si = 1, No = 0): "
              << f1.verifica_piloto("Lewis Hamilton") << std::endl;

    /* ---- objeto de clase drift ---- */
    std::cout << "\n---- Objeto de clase Drift ----" << std::endl;
    Drift carro_drift1("BMW M2 Competition", 4, 2, 2, 120); // objeto con valores de entrada
    std::cout << "Datos del objeto: \n" << "Modelo del vehículo: " << carro_drift1.get_modelo() << "\n" 
              << "Número de llantas: " << carro_drift1.get_llantas() << "\n"
              << "Número de asientos disponibles: " << carro_drift1.get_asientos() << "\n"
              << "Número de pilotos: " << carro_drift1.get_piloto() 
              << "Número identificador: " << carro_drift1.get_id() << std::endl << std::endl;

    // condicional que verifica si el vehículo es apto para hacer drift
    std::cout << carro_drift1.es_apto_para_drift("si") << std::endl;
    
    /* ---- objeto de clase rally ---- */
    std::cout << "\n\n---- Objeto de clase Rally ----" << std::endl;
    Rally carro_rally("Citroën C4 WRC", 4, 2, 1, 95, 100, 1000);
    std::cout << "Datos del objeto: \n" << "Modelo del vehículo: " << carro_rally.get_modelo() << "\n"
              << "Número de llantas: " << carro_rally.get_llantas() << "\n"
              << "Número identificador del vehículo: " << carro_rally.get_id() << "\n" 
              << "Número de pilotos: " << carro_rally.get_piloto() << "\n" 
              << "Peso del vehículo: " << carro_rally.get_peso() << " kg" << std::endl;

    // tipo de campeonato
    carro_rally.campeonato_rally("Junior");
    std::cout << "\nEl campeonato fue encontrado (Si = 1, No = 0):  " 
              << carro_rally.verifica_campeonato("Junior") << std::endl;
    
    return 0;
}
