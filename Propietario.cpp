//
// Created by lufe y Gonzo Feb2024.
//

#include "Propietario.h"

//TODO Agrege el constructor por defecto y agrege un constructor con dos parametros


Propietario::Propietario(std::string nombre, std::string docIdentidad) {
 this->nombre = nombre;
 this->docIdentidad = docIdentidad;
}
Propietario::Propietario(std::string nombre){
    this->nombre = nombre;
}
std::string Propietario::getNombre()  {
    return nombre;
}
std::string Propietario::getDocIdentidad(){
    return docIdentidad;
}

void Propietario::setNombre(std::string nombre) {
    this->nombre = nombre;
}
void Propietario::setDocIdentidad(std::string id){
    docIdentidad = id;
}
void Propietario::setEdad(int edad){
    this->edad = edad;
}
std::string Propietario::mostrarInfo(){
    string info = nombre +  " " + docIdentidad + " " + to_string(edad);
    return info;
}