#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include "Persona.h"
class Persona
{
private:
    std::string nombre;
    int edad;
public:
    Persona(std::string, int);
    ~Persona();
    virtual void mostrarDatos(std::ofstream);
};
Persona::Persona(std::string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}
Persona::~Persona()
{
}
void Persona::mostrarDatos(std::ofstream archivo)
{
    std::cout << "El nombre del empleado es: " << nombre << std::endl;
    archivo << "El nombre del empleado es: " << nombre << std::endl;
    std::cout << "La edad del empleado es: " << edad << std::endl;
    archivo << "La edad del empleado es: " << edad << std::endl;
}
class Empleado :public Persona
{
private:
    int horas_de_trabajo, sueldo;
    std::string posicion_trabajo;
    
public:
    Empleado(std::string, int, int, int, std::string);
    ~Empleado();
    void mostrarDatos(std::ofstream) override;
};
Empleado::Empleado(std::string _nombre, int _edad, int _horas_de_trabajo, int _sueldo, std::string _posicion_trabajo) : Persona(_nombre, _edad)
{
    horas_de_trabajo = _horas_de_trabajo;
    sueldo = _sueldo;
    posicion_trabajo = _posicion_trabajo;
}
Empleado::~Empleado() 
{
}
void Empleado::mostrarDatos(std::ofstream archivo) 
{
    Persona::mostrarDatos(archivo);
    std::cout << "El empleado trabaja " << horas_de_trabajo << " horas." << std::endl;
    archivo << "El empleado trabaja " << horas_de_trabajo << " horas." << std::endl;
    std::cout << "El puesto del empleado es: " << posicion_trabajo << std::endl;
    archivo << "El puesto del empleado es: " << posicion_trabajo << std::endl;
    std::cout << "El empleado gana: $" << sueldo << std::endl;
    archivo << "El empleado gana: $" << sueldo << std::endl;
}

void crearEmpleado(Empleado*& Empli)
{
    std::string nombre, puesto;
    int edad, sueldo, cantidad_horas;
    std::cout << "Escriba el nombre del empleado: ";
    std::cin >> nombre;
    std::cout << "Escriba el sueldo del empleado: ";
    std::cin >> sueldo;
    std::cout << "Escriba el puesto del empleado: ";
    std::cin >> puesto;
    std::cout << "Escriba la edad del empleado: ";
    std::cin >> edad;
    std::cout << "Escriba la cantidad de horas que trabaja el empleado: ";
    std::cin >> cantidad_horas;
    Empli = new Empleado(nombre, edad, cantidad_horas, sueldo, puesto);
}


