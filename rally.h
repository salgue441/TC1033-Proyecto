#include <iostream>

class Rally
{
private:
    std::string modelo_vehiculo, campeonato_nombre[10];
    int num_llantas, num_de_vehiculo, num_pilotos, caracteres_campeonato;
    float peso_vehiculo;

public:
    // constructor default
    Rally() : modelo_vehiculo("None"), num_llantas(4), num_de_vehiculo(0), num_pilotos(1), 
            peso_vehiculo(1230) 
    { 
        for (int i = 0; i < 10; i++)
            campeonato_nombre[i] = "";
    }; 

    // custom constructor
    Rally(std::string modelo, int llantas, int numero, int pilotos, float peso) :
         modelo_vehiculo(modelo), num_llantas(llantas), num_de_vehiculo(numero), 
         num_pilotos(pilotos), peso_vehiculo(peso) 
    {
        for (int i = 0; i < 10; i++)
            campeonato_nombre[i] = "";
    };

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

    /* ---- Funciones ---- */
    void campeonato_rally(std::string );
    bool verifica_campeonato(std::string );
};

/* ---- llenando los getters y setters ---- */
// para modelo_vehiculo
std::string Rally::get_modelo() { return modelo_vehiculo; }
void Rally::set_modelo(std::string modelo) { modelo_vehiculo = modelo; }

// para llantas
int Rally::get_llantas() { return num_llantas; }
void Rally::set_llantas(int llantas) { num_llantas = llantas; }

// para num_vehículo
int Rally::get_numero() { return num_de_vehiculo; }
void Rally::set_numero(int numero) { num_de_vehiculo = numero; }

// para num-pilotos
int Rally::get_pilotos() { return num_pilotos; }
void Rally::set_pilotos(int pilotos) { num_pilotos = pilotos; }

// para peso del vehículo
float Rally::get_peso() { return peso_vehiculo; }
void Rally::set_peso(float peso) { peso_vehiculo = peso; }

/* ---- Funciones ---- */
/*
Función que agrega el nombre del campeonato de Rally. 
Los tipos disponibles son: WRC, WRC2, WRC3, Junior WRC
parámetros:
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
