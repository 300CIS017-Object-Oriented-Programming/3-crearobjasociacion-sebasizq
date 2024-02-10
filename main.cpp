#include <iostream>
#include "Perro.h"
#include "Propietario.h"

int main() {

    // Instanciar
    Perro firulais;
    firulais.setNombre("Firulais");
    firulais.setColor("Negro");
    firulais.setEdad(5);
    firulais.setTamanio("Grande");
    firulais.setRaza("Mastin napolitano");

    //Agregar un nuevo pPropietario a Firulais
    firulais.agregarPropietario("Carlos Zapata", "102842313");

    // Consultar el nombre del pPropietario del perro Firulais
    std::cout<< "El nombre del pPropietario del perro "<<firulais.getNombre() << " es " << firulais.getPropietario()->getNombre()<<std::endl;

    Perro* pPerro = new Perro("toby",2,"esnauser","blanco","pequeno");
    pPerro->ladrar();
    Propietario* pPropietario = new Propietario("Raul");
    pPropietario->setDocIdentidad("1111111");
    pPropietario->setEdad(30);
    cout << pPropietario->mostrarInfo()<<endl;
    pPerro->agregarPropietario("SEBASTIAN","1455411");
    cout << pPerro->getPropietario()->getDocIdentidad() << endl;
    pPerro->agregarVeterinario("el toro",15);
    cout << pPerro->getVeterinario()->getNombre() << " y " << pPerro->getVeterinario()->getAniosExperiencia() << endl;
    Raza maztin("Mastin Napolitano","Italia");
    Raza maltes("Maltes","Italia");
    firulais.asociarRaza(maztin);
    cout << firulais.getInfoRaza()->getNombre() << " " << firulais.getInfoRaza()->getPaisOrigen() << endl;

    return 0;
}
