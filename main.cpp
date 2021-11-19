#include <iostream>
#include "formula.h"
#include "drift.h"
#include "rally.h"

int main()
{
    /* ---- objeto de clase formula ---- */
    std::cout << "---- Objeto de clase F1 ----" << std::endl;
    Formula f1("Ascari KZ1", 4, 1, 752, 95); // objetos con valores de entrada
    // mostrando los valores
    std::cout << "Datos del objeto: \n" << "Modelo del vehículo: " << f1.get_nombre() << "\n"
                  << "Número de llantas: " << f1.get_llantas() << "\n"
                  << "Número de asientos: " << f1.get_asientos() << "\n" 
                  << "Peso del vehículo: " << f1.get_peso_auto() << "\n" 
                  << "Número identificador: " << f1.get_numero_auto() << std::endl << std::endl;
    
    // verifica el peso total del vehículo ingresado
    std::cout << "El peso del vehículo tiene que ser menor o igual a 942 kilogramos" << std::endl;
    std::cout << f1.calcula_peso_con_piloto_y_gasolina(752, 100, 80) << std::endl;

    // agrega nombre de la escuderia y lo verifica
    f1.agrega_escuderia("McLaren"); 
    std::cout << "La escudería ingresada se encuentra (Si = 1, No = 0): " 
              << f1.verifica_escuderia("McLaren") << std::endl;

    // agrega nombre del piloto y lo verifica
    f1.agrega_piloto("Lewis Hamilton");
    std::cout << "El piloto ingresado se encunetra (Si = 1, No = 0): "
              << f1.verifica_piloto("Lewis Hamilton") << std::endl;

    /* ---- objeto de clase drift ---- */
    std::cout << "\n---- Objeto de clase Drift ----" << std::endl;
    Drift carro_drift1("BMW M2 Competition", 4, 2, 2, 120); // objeto con valores de entrada
    std::cout << "Datos del objeto: \n" << "Modelo del vehículo: " << carro_drift1.get_modelo() << "\n" 
              << "Número de llantas: " << carro_drift1.get_numLlantas() << "\n"
              << "Número de asientos disponibles: " << carro_drift1.get_asientos() << "\n"
              << "Número de pilotos: " << carro_drift1.get_pilotos() << std::endl << std::endl;

    // condicional que verifica si el vehículo es apto para hacer drift
    std::cout << carro_drift1.es_apto_para_drift("si");

    /* ---- objeto de clase rally ---- */
    std::cout << "\n\n---- Objeto de clase Rally ----" << std::endl;
    Rally carro_rally("Citroën C4 WRC", 4, 134, 1, 1230);
    std::cout << "Datos del objeto: \n" << "Modelo del vehículo: " << carro_rally.get_modelo() << "\n"
              << "Número de llantas: " << carro_rally.get_llantas() << "\n"
              << "Número identificador del vehículo: " << carro_rally.get_numero() << "\n" 
              << "Número de pilotos: " << carro_rally.get_pilotos() << "\n" 
              << "Peso del vehículo: " << carro_rally.get_peso() << " kg" << std::endl;

    // tipo de campeonato
    carro_rally.campeonato_rally("Junior");
    std::cout << "\n Si = 1, No = 0:  " << carro_rally.verifica_campeonato("Junior") << std::endl;

    
    return 0;
}
