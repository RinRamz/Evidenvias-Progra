#include <iostream>
#pragma once

class Publicidad
{
public: //metodos
	Publicidad(int, int, std::string);
	~Publicidad();
private: //atributos
	int costoMensual = 0;
	int costoAnual = 0;
	std::string plataformas;
};

Publicidad::Publicidad(int _costoM,int _costoA, std::string _plat)
{
	costoAnual = _costoA;
	costoMensual = _costoM;
	plataformas = _plat;
}
Publicidad::~Publicidad()
{
}
void crearPublicidad(Publicidad*& publicidad1)
{
	int _costoM;
	int _costoA;
	std::string _plataforma;
	std::cout << "Hola, ingresa los siguientes datos: \nCosto Mensual: ";
	std::cin >> _costoM;
	std::cout << "\nCosto Anual: ";
	std::cin >> _costoA;
	std::cout << "\nLa plataforma: ";
	std::cin >> _plataforma;
	publicidad1 = new Publicidad(_costoM, _costoA, _plataforma);
}
