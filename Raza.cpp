//
// Created by sebas on 8/02/2024.
//

#include "Raza.h"
Raza::Raza(){
    nombre = "";
    paisOrigen = "";
}
Raza::Raza(string nombre , string paisOrigen){
    this->nombre = nombre;
    this->paisOrigen = paisOrigen;
}
string Raza::getNombre(){
    return nombre;
}
string Raza::getPaisOrigen(){
    return paisOrigen;
}
void Raza::setNombre(string nombre){
    this->nombre = nombre;
}
void Raza::setPaisOrigen(string paisOrigen){
    this->paisOrigen = paisOrigen;
}