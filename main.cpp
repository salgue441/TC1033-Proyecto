#include <iostream>
#include "formula.h"
#include "drift.h"
#include "rally.h"

int main()
{
    /* ---- objeto de clase formula ---- */
    std::cout << "Objeto de clase Formula" << std::endl;
    Formula f2("Ascari KZ1", 4, 1, 752);
    std::cout << f2.get_nombre() << " " << f2.get_llantas() << " " 
              << f2.get_asientos() << " " << f2.get_peso_auto() << std::endl;
    std::cout << f2.calcula_peso_con_piloto_y_gasolina(752, 120, 80) << std::endl;

    /* ---- objeto de clase drift ---- */
    std::cout << "\nObjeto de clase Drift" << std::endl;
    Drift carro_drift1("BMW M2 Competition", 4, 2, 2);
    std::cout << carro_drift1.get_modelo() << " " << carro_drift1.get_numLlantas() << " "
              << carro_drift1.get_asientos() << " " << carro_drift1.get_pilotos() << std::endl;
    std::cout << carro_drift1.es_apto_para_drift("si");

    /* ---- objeto de clase rally ---- */
    std::cout << "\n\nObjeto de clase Rally" << std::endl;
    Rally carro_rally("Citroën C4 WRC", 4, 134, 1, 1230);
    std::cout << carro_rally.get_modelo() << " " << carro_rally.get_llantas() << " "
              << carro_rally.get_numero() << " " << carro_rally.get_pilotos() << " " 
              << carro_rally.get_peso() << std::endl;
    

    return 0;
}