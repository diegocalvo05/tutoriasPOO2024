#include<iostream>
#include"clases.h"

using namespace std;

int main() {

  Empleado empleado1 = Empleado("Diego", "Tigo", 20);

  Maestro maestro1 = Maestro("Sofia", "Colegio San Jose", 35, "Matematica", "M0224");

  maestro1.imprimirDatos();

  maestro1.agregarHorasExtra(5);

  cout << endl;
  maestro1.imprimirDatos();

  maestro1.agregarHorasExtra(10);

  cout << endl;
  maestro1.imprimirDatos();

  maestro1.setHorasExtra(0);

  maestro1.agregarHorasExtra(10);

  cout << endl;
  maestro1.imprimirDatos();

  return 0;
}