#ifndef PILOTO_H
#define PILOTO_H

#include <iostream>

class Piloto
{
private:
	std::string nombre_piloto, nacionalidad;
	int edad_piloto, num_ID_piloto;

public:
	/* ---- Constructores ---- */
	Piloto() : nombre_piloto("None"), nacionalidad("None"), edad_piloto(18), num_ID_piloto(1) {};
	Piloto(std::string nombre, std::string pais, int edad, int ID_piloto) : nombre_piloto(nombre), 
										nacionalidad(pais),
										edad_piloto(edad),
										num_ID_piloto(ID_piloto)
																	num_ID_piloto(ID_piloto) 
	{};

	/* ---- Getters y setters ---- */
	// para nombre 
	std::string get_nombre();
	void set_nombre(std::string );

	// para nacionalidad
	std::string get_nacionalidad();
	void set_nacionalidad(std::string );

	// para edad
	int get_edad();
	void set_edad(int );

	// para ID_piloto
	int get_ID();
	void set_ID(int );

	/* ---- Funcion ---- */
	bool verifica_edad(int );
};

/* ---- Llenando constructores ---- */
// para nombre
std::string Piloto::get_nombre() { return nombre_piloto; }
void Piloto::set_nombre(std::string nombre) { nombre_piloto = nombre; }

// para nacionalidad
std::string Piloto::get_nacionalidad() { return nacionalidad; }
void Piloto::set_nacionalidad(std::string pais) { nacionalidad = pais; }

// para edad
int Piloto::get_edad() { return edad_piloto; }
void Piloto::set_edad(int edad) { edad_piloto = edad; }

// para ID piloto
int Piloto::get_ID() { return num_ID_piloto; }
void Piloto::set_ID(int ID_piloto) { num_ID_piloto = ID_piloto; }

/* ---- Funciones ---- */
bool Piloto::verifica_edad(int edad)
{
	if (edad >= 18) return true;
	else return false;
}

#endif // !PILOTO_H
