#pragma once

#include<iostream>
#include<string>

class Proveedor
{
public:
	Proveedor(std::string _nombre, std::string _recurso, float _costoAnual, std::string _localizacion, std::string _metodoTransporte);

private:
	std::string nombre;
	std::string recurso;
	float costoAnual;
	std::string localizacion;
	std::string metodoTransporte;
};

Proveedor::Proveedor(std::string _nombre, std::string _recurso, float _costoAnual, std::string _localizacion, std::string _metodoTransporte)
{
	nombre = _nombre;
	recurso = _recurso;
	costoAnual = _costoAnual;
	localizacion = _localizacion;
	metodoTransporte = _metodoTransporte;
}

void CrearProovedor(Proveedor*& nuevoProveedor)
{
	std::string _nombre;
	std::string _recurso;
	float _costoAnual;
	std::string _localizacion;
	std::string _metodoTransporte;

	std::cout << "Creador de Proovedor: \n\n";
	std::cout << "Ingresa el nombre: ";
	std::getline(std::cin, _nombre);
	std::cout << "Ingresa el recurso que proovee: ";
	std::getline(std::cin, _recurso);
	std::cout << "Ingresa el costo anual del proovedor:	";
	std::cin >> _costoAnual;
	std::cout << "Ingresa el lugar del que proovee: ";
	std::getline(std::cin, _localizacion);
	std::cout << "Ingresa el metodo de transporte de los recursos";
	std::getline(std::cin, _metodoTransporte);

	nuevoProveedor = new Proveedor(_nombre, _recurso, _costoAnual, _localizacion, _metodoTransporte);
}

