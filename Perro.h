//
// Created by lufe0 y Gonzo Feb2024.
//
#ifndef PERRO_H
#define PERRO_H

#include <string>
#include <iostream>
#include "Propietario.h"
#include "Veterinario.h"
#include "Raza.h"
using namespace std;
class Perro {
private:
    int edad;
    std::string nombre;
    std::string raza;
    std::string tamanio;
    std::string color;
    Propietario* pPropietario;
    Veterinario* pVeterinario;
    Raza * pRaza;

public:
    Perro();
    Perro(string nombre, int edad, string raza, string color , string tamanio);
    ~Perro(); //Destructor
    void ladrar();
    Propietario * getPropietario();
    Veterinario* getVeterinario();
    Raza* getInfoRaza();
    // Sirve para.......
    void agregarPropietario(std::string nombre, std::string docIdentidad); // Crea un objeto de la clase
    //propietario con dos parametros en memoria dinamica
    void agregarVeterinario(std::string nombre, int aniosExperiencia);
    // Sirve para relacionar dos clases cuando ya se tiene un objeto
    void setPropietario(Propietario * pPropietario);
    void asociarRaza(Raza &pRaza);

    int getEdad();
    void setEdad(int edad);
    std::string getRaza();
    void setRaza(std::string raza);
    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getTamanio();
    void setTamanio(std::string tamanio);
    std::string getColor();
    void setColor(std::string color);
};
#endif
