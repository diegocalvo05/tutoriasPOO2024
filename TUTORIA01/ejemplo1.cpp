#include<iostream>
#include "empleado.h"

using namespace std;


int main() {

    int numero = 5;

    Empleado empleado1 = Empleado("Sofia", "Apple", 35);
 
    empleado1.setNombre("Diego");

    cout << empleado1.getNombre() << endl;
    
    return 0;
}