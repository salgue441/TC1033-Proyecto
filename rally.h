#include <iostream>
#include "vehiculo.h"

class Rally : public Vehiculo
{
private:
    int litros_de_gasolina, caracteres_campeonato;
    float peso_vehiculo;
    std::string campeonato_nombre[10];

public:
    /* ---- Constructor ---- */
    Rally(std::string nombre, int llantas, int asientos, int piloto, int identificador, int litros, float peso) : 
        Vehiculo(nombre, llantas, asientos, piloto, identificador), 
        litros_de_gasolina(litros), peso_vehiculo(peso)
    { 
        for (int i = 0; i < 10; i++)
            campeonato_nombre[i] = "";
    }

    /* ---- Getters y Setteres ---- */
    // para gasolina
    int get_litros_gas();
    void set_litros_gas(int );

    // para peso
    float get_peso();
    void set_peso(float );
    
    /* ---- Funciones ---- */
    void campeonato_rally(std::string );
    bool verifica_campeonato(std::string );
};

/* ---- Llenando getters y setters ---- */
int Rally::get_litros_gas() { return litros_de_gasolina; }
void Rally::set_litros_gas(int litros) { litros_de_gasolina = litros; }

float Rally::get_peso() { return peso_vehiculo; }
void Rally::set_peso(float peso) { peso_vehiculo = peso; }

/* ---- Funciones ---- */
/* Función que agrega el nombre del campeonato de Rally. 
Los tipos disponibles son: WRC, WRC2, WRC3, Junior WRC
params:
    - campeontao de tipo string. Aquí el usuario selecciona el tipo de campeonato
*/
void Rally::campeonato_rally(std::string campeonato)
{
    if (caracteres_campeonato < 10)
    {
        campeonato_nombre[caracteres_campeonato] = campeonato;
        caracteres_campeonato++;
    }

    std::cout << campeonato;
}

/*
Función que revisa si el nombre ingresado del campeonato de rally es el mismo que el asignado al
objeto.
parámetros:
    - campeonato de tipo string. El usuario ingresa un campeonato de rally.
*/
bool Rally::verifica_campeonato(std::string campeonato)
{
    campeonato = campeonato_nombre[1];
    for (int i = 1; i < 10; i++)
        if (campeonato_nombre[i] == campeonato)
        {
            return true;
        }
    return false;
}
