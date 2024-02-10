//
// Created by sebas on 8/02/2024.
//

#ifndef INC_3_CREAROBJASOCIACION_RAZA_H
#define INC_3_CREAROBJASOCIACION_RAZA_H
#include <string>
#include <iostream>
using namespace std;

class Raza {
private:
    string nombre, paisOrigen;
public:
    Raza();
    Raza(string nombre , string paisOrigen);
    string getNombre();
    string getPaisOrigen();
    void setNombre(string nombre);
    void setPaisOrigen(string paisOrigen);
};


#endif //INC_3_CREAROBJASOCIACION_RAZA_H
