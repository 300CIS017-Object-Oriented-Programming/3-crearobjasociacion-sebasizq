//
// Created by sebas on 8/02/2024.
//

#ifndef INC_3_CREAROBJASOCIACION_VETERINARIO_H
#define INC_3_CREAROBJASOCIACION_VETERINARIO_H
#include <iostream>
#include <string>

using namespace std;
class Veterinario {
private:
    int aniosExperiencia;
    string nombre;
public:
    Veterinario();
    Veterinario(string nombre , int aniosExperiencia);
    string getNombre();
    int getAniosExperiencia();
    void setNombre(string nombre);
    void setAniosExperiencia(int aniosExperiencia);

};


#endif //INC_3_CREAROBJASOCIACION_VETERINARIO_H
