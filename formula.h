#include <iostream>

class Formula
{   
private:
    // variables de instancia
    std::string nombre_vehiculo;
    int num_llantas, asientos_disp;
    float peso_vehiculo;

public:
    Formula() : nombre_vehiculo(""), num_llantas(4), asientos_disp(1), peso_vehiculo(752) { };
    Formula(std::string nombre, int numero_llantas, int numero_asientos, float peso) :
     nombre_vehiculo(nombre), num_llantas(numero_llantas), asientos_disp(numero_asientos),
     peso_vehiculo(peso) { };

    // constructor con parámetros
    void set_nombre(std::string );
    std::string get_nombre();

    // getter y setter para num_llantas
    void set_llantas(int );
    int get_llantas();

    // getter y setter para asientos_disp
    void set_asientos(int );
    int get_asientos();

    // getter y setter para peso
    void set_peso_auto(float );
    float get_peso_auto();

    float calcula_peso_con_piloto_y_gasolina(float, float, float);
};

/* ---- Llenando los getters y setter ---- */ 
// getter y setter para nombre del vehículo
void Formula::set_nombre(std::string nombre) { nombre_vehiculo = nombre; }
std::string Formula::get_nombre() { return nombre_vehiculo; }

// getter y setter para llantas
void Formula::set_llantas(int numero_llantas) { num_llantas = numero_llantas; }
int Formula::get_llantas() { return num_llantas; }

// getter y setter para asientos
void Formula::set_asientos(int numero_asientos) { asientos_disp = numero_asientos; }
int Formula::get_asientos() { return asientos_disp; }

// getter y setter para peso
void Formula::set_peso_auto(float peso) { peso_vehiculo = peso; }
float Formula::get_peso_auto() { return peso_vehiculo; }

/* Función que calcula el peso total del vehículo con el piloto + gasolinas y retorna si el 
peso total excede el límite o no.
parámetros:
    - float peso del vehículo
    - float peso del piloto
    - float peso de la gasolina
*/
float Formula::calcula_peso_con_piloto_y_gasolina(float peso, float peso_piloto, float peso_gas)
{
    float peso_total = peso + peso_piloto + peso_gas;
    if (peso_total > 942) std::cout << "El peso excede el límite." << std::endl;
    else std::cout << "El peso está adentro del ĺimite." << std::endl;

    std::cout << "El peso total es: ";
    return peso_total;
}