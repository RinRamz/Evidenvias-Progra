#pragma once
#include <iostream>
#include <string>
using namespace std;
class Localizacion
{
private:
	string pais, estado, ciudad, municipio, colonia, calle;
public:	
	Localizacion(string, string, string, string, string, string);
	~Localizacion();
};
Localizacion::Localizacion(string _pais, string _estado, string _ciudad, string _municipio, string _colonia, string _calle)
{
	pais = _pais;
	estado = _estado;
	ciudad = _ciudad;
	municipio = _municipio;
	colonia = _colonia;
	calle = _calle;
}
Localizacion::~Localizacion()
{
}

void crearLocalizacion(Localizacion*& locali)
{
	std::string pais, estado, ciudad, municipio, colonia, calle;
	std:cout << "Ingrese el pais de la localizacion del restaurante: ";
	std::cin >> pais;
	std:cout << "Ingrese el estado de la localizacion del restaurante: ";
	std::cin >> estado;
	std:cout << "Ingrese la ciudad de la localizacion del restaurante: ";
	std::cin >> ciudad;
	std:cout << "Ingrese el municipio de la localizacion del restaurante: ";
	std::cin >> municipio;
	std:cout << "Ingrese la colonia de la localizacion del restaurante: ";
	std::cin >> colonia;
	std:cout << "Ingrese la colonia de la localizacion del restaurante: ";
	std::cin >> calle;
	locali = new Localizacion(pais, estado, ciudad, municipio, colonia, calle);
}


