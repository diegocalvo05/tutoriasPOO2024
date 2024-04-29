#include <iostream>
#include "clases.h"

using namespace std;

int main() {

    Triangulo t1 = Triangulo(3.5, 5);
    Hexagono h1 = Hexagono(6.5, 11);

    cout << "Triangulo 1: " << endl;
    cout << "\t perimetro: " << t1.calcularPerimetro() << endl;
    cout << "\t area: " << t1.calcularArea() << endl;

    cout << "\nHexagono 1: " << endl;
    cout << "\t perimetro: " << h1.calcularPerimetro() << endl;
    cout << "\t area: " << h1.calcularArea() << endl;

    return 0;
}