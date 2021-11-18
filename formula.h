#include <iostream>

class Formula
{   
private:
    // variables de instancia
    std::string nombre_vehiculo, nombre_del_piloto[50], nombre_escuderia[50];
    int num_llantas, asientos_disp, caracteres_escuderia, caracteres_piloto;
    float peso_vehiculo;

public:
    /* ---- Constructores ---- */
    // Constructor default
    Formula() : nombre_vehiculo(""), num_llantas(4), asientos_disp(1), peso_vehiculo(752)
    {
        // para nombre del piloto
        for (int i = 0; i < 50; i++)
            nombre_del_piloto[i] = "";

        // para nombre de escuderia
        for (int i = 0; i < 50; i++)
            nombre_escuderia[i] = "";
     };

    // constructor con parámetros
    Formula(std::string nombre, int numero_llantas, int numero_asientos, float peso) :
            nombre_vehiculo(nombre), num_llantas(numero_llantas), 
            asientos_disp(numero_asientos), peso_vehiculo(peso) 
    {
        // para nombre del piloto
        for (int i = 0; i < 50; i++)
            nombre_del_piloto[i] = "";

        // para nombre de escuderia
        for (int i = 0; i < 50; i++)
            nombre_escuderia[i] = "";
    };

    /* ---- Getter y setters ---- */
    // para nombre_vehiculo
    void set_nombre(std::string );
    std::string get_nombre();

    // para num_llantas
    void set_llantas(int );
    int get_llantas();

    // para asientos_disp
    void set_asientos(int );
    int get_asientos();

    // para peso
    void set_peso_auto(float );
    float get_peso_auto();

    /* ---- Funciones ---- */
    float calcula_peso_con_piloto_y_gasolina(float, float, float);
    void agrega_escuderia(std::string );
    void agrega_piloto(std::string );
    bool verifica_piloto(std::string );
    bool verifica_escuderia(std::string );
};

/* ---- Llenando los getters y setter ---- */ 
// getter y setter para nombre del vehículo
std::string Formula::get_nombre() { return nombre_vehiculo; }
void Formula::set_nombre(std::string nombre) { nombre_vehiculo = nombre; }

// getter y setter para llantas
int Formula::get_llantas() { return num_llantas; }
void Formula::set_llantas(int numero_llantas) { num_llantas = numero_llantas; }

// getter y setter para asientos
int Formula::get_asientos() { return asientos_disp; }
void Formula::set_asientos(int numero_asientos) { asientos_disp = numero_asientos; }

// getter y setter para peso
float Formula::get_peso_auto() { return peso_vehiculo; }
void Formula::set_peso_auto(float peso) { peso_vehiculo = peso; }

/* ---- Llenado de funciones ---- */
/* Función que calcula el peso total del vehículo con el piloto + gasolinas y retorna si el 
peso total excede el límite o no.
parámetros:
    - float peso del vehículo
    - float peso del piloto
    - float peso de la gasolina
*/
float Formula::calcula_peso_con_piloto_y_gasolina(float peso, float peso_piloto, float peso_gas)
{
    std::string mensaje = " ";
    float peso_total = peso + peso_piloto + peso_gas;

    if (peso_total > 942) mensaje = " excede el límite establecido";
    else mensaje = " está dentro del límite establecido";

    std::cout << "El vehículo ingresado tiene un peso que" << mensaje << " ;su peso total es: ";
    return peso_total;
}

/* Función que agrega el nombre de la escuderia pero no la muestra en pantalla para el usuario
parámetro:
    - std::string escuderia: el usuario ingresa el nombre de la escuderia en formato de string y esta
        función lo agrega
*/
void Formula::agrega_escuderia(std::string escuderia)
{
    if (caracteres_escuderia < 50)
    {
        nombre_escuderia[caracteres_escuderia] = escuderia;
        caracteres_escuderia++; // incrementando el contador
    }
}

/* Función que verifica si la escudería ingresada se encuentra en la cadena de texto
parámetros:
    - escuderia: recibe el nombre de una escuderia de F1 y comprueba si esta asignada a un objeto
*/
bool Formula::verifica_escuderia(std::string escuderia)
{
    escuderia = nombre_escuderia[0];
    for (int i = 1; i < 49; i++)
        if (nombre_escuderia[i] == escuderia)
            return true;
    return false;
}

/* Función que agrega el nombre del piloto de F1 pero no la muestra en pantalla para el usuario
parámetro:
    - std::string piloto: el usuario ingresa el nombre del piloto en formato de string y esta función lo agrega
*/
void Formula::agrega_piloto(std::string piloto)
{
    if (caracteres_piloto < 50)
    {
        nombre_del_piloto[caracteres_piloto] = piloto;
        caracteres_piloto++;
    }
}

/* Función que comprueba si el nombre del piloto ingresado pertenece al objeto 
parámetros: 
    - piloto: recibe el nombre del piloto de F1 y comprueba si esta asignado al objeto
*/
bool Formula::verifica_piloto(std::string piloto)
{
    piloto = nombre_del_piloto[0];
    for (int i = 1; i < 49; i++)
        if (nombre_del_piloto[i] == piloto)
            return true;
    return false;
}
