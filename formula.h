#include <string>
#include "vehiculo.h"

class Formula : public Vehiculo
{  
private:
    float peso_vehiculo;
    std::string nombre_escuderia[50], nombre_piloto[50];
    int caracteres_escuderia, caracteres_piloto;

public:
    /* ---- Constructor ---- */
    Formula(std::string nombre, int llantas, int asientos, int piloto, int identificador) : 
        Vehiculo(nombre, llantas, asientos, piloto, identificador) { 
        for (int i = 0; i < 50; i++)
            nombre_escuderia[i] = "";

        for (int i = 0; i < 50; i++)
            nombre_piloto[i] = "";
    };

    /* ---- funciones ---- */
    void calcula_peso_con_piloto_y_gasolina(float , float , float);
    void agrega_escuderia(std::string );
    void agrega_piloto(std::string );
    bool verifica_escuderia(std::string );
    bool verifica_piloto(std::string );
};

/* ----  Llenando funciones ---- */
/* Función que calcula si el peso total del vehículo excede los límites establecidos por la FIA. 
Se crean dos variables adicionales llamadas peso_lim que es limite de peso maximo establecido por la FIA,
peso_total que es la suma de los pesos ingresados por el usuario y peso_diferencia que calcula 
la diferencia entre el peso total y el peso limite. Al final, la función muestra en la terminal
si el peso excede el limite o no y por que cantidad lo excede o queda bajo el rango.
params:
    - peso de tipo float, peso del vehiculo - normalmente un vehiculo de f1 pesa 752 kgs.
    - peso_piloto de tipo float, peso del piloto - lo establecido por la FIA es de 80 kgs.
    - peso_gas de tipo float, peso de la gasolina en el vehiculo - establecido por la fia son 110 kgs
*/ 
void Formula::calcula_peso_con_piloto_y_gasolina(float peso, float peso_piloto, float peso_gas)
{
    float peso_total = peso + peso_piloto + peso_gas, peso_lim = 942, peso_diferencia;
    std::string mensaje = "";

    peso_diferencia = peso_total - peso_lim;

    if (peso_total > peso_lim) mensaje = "El peso excede el límite con: ";
    else mensaje = "El peso está dentro del rango con: ";

    std::cout << mensaje << peso_diferencia << " kgs de diferencia" << std::endl;
}

/* Función que agrega el nombre de la escuderia a la que pertenece el objeto. No devuelve nada ni 
muestra nada al usuario. 
params:
    - nombre de la escuderia (equipo) en tipo de caracteres 
        - escuderias disponibles: Ferrari, Aston Martin, McLaren Racing, Red Bull, Alfa Romtero Racing, 
                Alpha Tauri, Mercedes AMG F1, Alpine F1 Team, Haas F1 Team
*/
void Formula::agrega_escuderia(std::string escuderia)
{
    if (caracteres_escuderia < 50)
    {
        nombre_escuderia[caracteres_escuderia] = escuderia;
        caracteres_escuderia++;
    }
}

/* Función que verifica si la escuderia ingresada por el usuario se encuentra entre los atributos
del objeto 
params:
    - nombre de la escuderia (equipo) en tipo de caracteres 
        - escuderias disponibles: Ferrari, Aston Martin, McLaren Racing, Red Bull, Alfa Romtero Racing, 
                Alpha Tauri, Mercedes AMG F1, Alpine F1 Team, Haas F1 Team
*/
bool Formula::verifica_escuderia(std::string escuderia)
{
    escuderia = nombre_escuderia[0];
    for (int i = 1; i < 49; i++)
        if (nombre_escuderia[i] == escuderia)
            return true;
    return false;
}

/* Función que agrega el nombre del piloto a la que pertenece el objeto. No devuelve nada ni 
muestra nada al usuario. 
params:
    - nombre del piloto de tipo string (caracteres)

*/
void Formula::agrega_piloto(std::string piloto)
{
    if (caracteres_piloto < 50)
    {
        nombre_piloto[caracteres_piloto] = piloto;
        caracteres_piloto++;
    }
}

/* Función que verifica si el nombre del piloto ingresado por el usuario se encuentra 
entre los atributos del objeto 
params:
    - nombre del piloto
*/
bool Formula::verifica_piloto(std::string piloto)
{
    piloto = nombre_piloto[0];
    for (int i = 1; i < 49; i++)
        if (nombre_piloto[i] == piloto)
            return true;
    return false;
}
