#include "clases.h"

int main() {
    
    Humano *persona1 = new Humano(35, "Jorge");
    Perro *perro1 = new Perro(7, "chester", "chihuaha");

    Animal animal3 = Animal(15);

    Animal *animal1 = persona1;
    Animal *animal2 = perro1;

    animal1->comer();
    animal2->comer();
    animal3.comer();

    cout << endl << animal1->getEdad() << endl;
    cout << animal2->getEdad() << endl;
    cout << animal3.getEdad() << endl;

    return 0;
}