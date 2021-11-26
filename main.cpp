#include <iostream>
#include "formula.h"
#include "rally.h"
#include "drift.h"

int main()
{
    /* ---- Objeto de clase fórmula ---- */
    std::cout << "---- Objeto de clase fórmula ----" << std::endl;
    Formula f1("Mercedes-AMG F1 W10 EQ Power+", 4, 1, 1, 44, 743.0);

    // mostrando datos del objeto
    std::cout << "Datos del objeto: \n" 
              << "- Modelo del vehículo: " << f1.get_modelo() << "\n"
              << "- Número de llantas: " << f1.get_llantas() << "\n"
              << "- Número de asientos: " << f1.get_asientos() << "\n"
              << "- Número de pilotos: " << f1.get_num_piloto() << "\n"
              << "- Número identificador: " << f1.get_id() << "\n"
              << "- Peso del vehículo: " << f1.get_peso() << std::endl;

    // verificando el peso del vehículo
    std::cout << std::endl << "Verificando el peso del vehículo: " << std::endl;
    f1.calcula_peso_con_piloto(743.0, 80, 100);

    // agregando y verificando el nombre de la escuderia
    std::cout << "\nVerificando la escudería: " << std::endl;
    f1.agrega_escuderia("Mercedes AMG F1");
    std::cout << "La escudería ingresada fue encontrada (Si = 1, No = 0): "
              << f1.verifica_escuderia("Mercedes AMG F1") << std::endl;

    // creando el piloto
    f1.crea_piloto("Lewis Hamilton", "Inglaterra", 36, 1);
    std::cout << "\nDatos del Piloto: " << std::endl
              << "- El nombre del piloto es: " << f1.get_piloto().get_nombre() << "\n"
              << "- El país de origen es: " << f1.get_piloto().get_nacionalidad() << "\n"
              << "- La edad del piloto es: " << f1.get_piloto().get_edad() << "\n"
              << "- El número identificador del piloto es: " << f1.get_piloto().get_ID() 
              << std::endl;
    
    // verificando la edad del piloto
    std::cout << "\nEl piloto cumple con la edad suficiente para competir (Si = 1, No = 0): "
              << f1.get_piloto().verifica_edad(36) << std::endl;

    /* ---- Objeto de clase rally ---- */
    std::cout << "\n---- Objeto de clase rally ----" << std::endl;
    Rally rally1("Citroën C4 WRC", 4, 2, 1, 95, 2100, 1337);

    // mostrando datos del objeto
    std::cout << "Datos del objeto: \n"
              << "- Modelo del vehículo: " << rally1.get_modelo() << "\n"
              << "- Número de llantas: " << rally1.get_llantas() << "\n"
              << "- Número de asientos: " << rally1.get_asientos() << "\n"
              << "- Número de pilotos: " << rally1.get_num_piloto() << "\n"
              << "- Número identificador: " << rally1.get_id() << "\n"
              << "- Peso del vehículo: " << rally1.get_peso() << std::endl;

    // ingresando y verificando el campeonato de rally
    std::cout << "\nCompetencia de rally: " << std::endl;
    rally1.campeonato_rally("WRC2");
    std::cout << "El campeonato fue encontrado  (Si = 1, No = 0): "
              << rally1.verifica_campeonato("WRC2") << std::endl;

    // creando el piloto
    rally1.crea_piloto("Sébastien Ogier", "Francia", 38, 30);
    std::cout << "\nDatos del piloto: " << std::endl
              << "- El nombre del piloto es: " << rally1.get_piloto().get_nombre() << "\n"
              << "- El país de origen es: " << rally1.get_piloto().get_nacionalidad() << "\n"
              << "- La edad del piloto es: " << rally1.get_piloto().get_edad() << "\n"
              << "- El número identificador del piloto es: " << rally1.get_piloto().get_ID()
              << std::endl;

    /* ---- Objeto de clase drift ---- */
    std::cout << "\n---- Objeto de clase drift: ----" << std::endl;
    Drift drift1("Nissan Silvia S15", 4, 4, 1, 50, 1625, "manual");
    
    // mostrando los datos del objeto
    std::cout << "Datos del objeto: \n"
              << "- Modelo del vehículo: " << drift1.get_modelo() << "\n"
              << "- Número de llantas: " << drift1.get_llantas() << "\n"
              << "- Número de asientos: " << drift1.get_asientos() << "\n"
              << "- Número de pilotos: " << drift1.get_asientos() << "\n"
              << "- Número identificador: " << drift1.get_id() << "\n"
              << "- Peso del vehículo: " << drift1.get_peso() << "\n"
              << "- Tipo de trasmición: " << drift1.get_trasmicion() << std::endl;

    // creando el piloto
    drift1.crea_piloto("James Deane", "Irlanda", 30, 0);
    std::cout << "\nDatos del piloto: \n"
              << "- El nombre del piloto es: " << drift1.get_piloto().get_nombre() << "\n"
              << "- El país de origen es: " << drift1.get_piloto().get_nacionalidad() << "\n"
              << "- La edad del piloto es: " << drift1.get_piloto().get_edad() << "\n"
              << "- El piloto ya está retirado"
              << std::endl;

    // verificando si es apto para hacer drift
    std:: cout << std::endl << drift1.es_apto_para_drift("manual") << std::endl;
    return 0;
}
