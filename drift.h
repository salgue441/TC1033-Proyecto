#include <iostream>

class Drift
{
private:
    int num_llantas, num_asientos, num_pilotos;
    std::string modelo_de_auto;

public:
    /* Constructores */
    Drift() : modelo_de_auto("None"), num_llantas(4), num_asientos(2), num_pilotos(2) { }; // default
    Drift(std::string modelo, int llantas, int asientos, int pilotos) : 
        modelo_de_auto(modelo), num_llantas(llantas), num_asientos(asientos), num_pilotos(pilotos) { }; // custom constructor

    /* getters y setters */
    // para el modelo
    void set_modelo(std::string );
    std::string get_modelo();

    // para llantas
    void set_numLlantas(int );
    int get_numLlantas();

    // para asientos
    void set_asientos(int );
    int get_asientos();

    // para num_pilotos
    void set_pilotos(int );
    int get_pilotos();

    // función
    std::string es_apto_para_drift(std::string );
};

/* Llenando getters y setters */
// para modelo
std::string Drift::get_modelo() { return modelo_de_auto; }
void Drift::set_modelo(std::string modelo) { modelo_de_auto = modelo; }

// para llantas
int Drift::get_numLlantas() { return num_llantas; }
void Drift::set_numLlantas(int llantas) { num_llantas = llantas; }

// para asientos
int Drift::get_asientos() { return num_asientos; }
void Drift::set_asientos(int asientos) { num_asientos = asientos; }

// para pilotos
int Drift::get_pilotos() { return num_pilotos; }
void Drift::set_pilotos(int pilotos) { num_pilotos = pilotos; }

/* Función que comprueba si el vehículo ingresado es apto para hacer drift. 
Params: 
    - cuatro_por_cuatro de tipo booleano
    - trasmicion de tipo booleano
*/
std::string Drift::es_apto_para_drift(std::string string_opcion)
{
    std::string result;
    int op; 

    std::cout << "Selecciona el tipo de trasmición: 1. Manual \t2. Automático :";
    std::cin >> op;
    std::cout << "[parámetro] El vehículo es 4 x 4?" << std::endl;

    // condicionales
    if (op == 1 && (string_opcion == "si" || string_opcion == "Si")) 
        result = "El carro es apto para hacer drift!";
    else if (op == 2 && (string_opcion == "si" || string_opcion == "Si"))
        result = "El carro puede ser apto para hacer drift pero no es recomendable";
    else    
        result = "El carro no es apto para hacer drift";

    return result;
}
