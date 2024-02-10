#include "Perro.h"
#include <iostream>

using namespace  std;
// Ejemplo de constructor por defecto con lista inicializadora
// Perro::Perro() : edad(0), raza(""), tamanio(""), color("") {}

// Ejemplo de constructor por defecto iniciando los atributos en el cuerpo del constructor
Perro::Perro() {
    this->edad = 0;
    this->raza = "";
    this->tamanio = "";
    this->color = "";
}
Perro::Perro(string nombre, int edad, string raza, string color , string tamanio) :
nombre(nombre), edad(edad), raza(raza) , color(color),tamanio(tamanio){}
void Perro::ladrar() {
    std::cout << "Guau Guau" << std::endl;
}

void Perro::agregarPropietario(std::string nombre, std::string docIdentidad) {
    // Asocia a la variable de instancia pPropietario un nuevo pPropietario
    // Es memoria dinámica, en el destructor se debe liberar
    this->pPropietario = new Propietario(nombre, docIdentidad);
}
void Perro::agregarVeterinario(std::string nombre, int aniosExperiencia){
    this->pVeterinario = new Veterinario(nombre,aniosExperiencia);
}
void Perro::setPropietario(Propietario *pPropietario) {
    this->pPropietario = pPropietario;
}
Raza* Perro::getInfoRaza(){
    return this->pRaza;
}
Propietario *Perro::getPropietario() {
    return this->pPropietario;
}
Veterinario* Perro::getVeterinario(){
    return this->pVeterinario;
}
void Perro::asociarRaza(Raza &pRaza){
    this->pRaza = &pRaza;
}
int Perro::getEdad() {
    return edad;
}

void Perro::setEdad(int edad) {
    this->edad = edad;
}

std::string Perro::getRaza() {
    return raza;
}

void Perro::setRaza(std::string raza) {
    this->raza = raza;
}

std::string Perro::getTamanio() {
    return tamanio;
}

void Perro::setTamanio(std::string tamanio) {
    this->tamanio = tamanio;
}

std::string Perro::getNombre() {
    return nombre;
}

void Perro::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string Perro::getColor() {
    return color;
}

void Perro::setColor(std::string color) {
    this->color = color;
}

Perro::~Perro() {
    delete pPropietario;
}




