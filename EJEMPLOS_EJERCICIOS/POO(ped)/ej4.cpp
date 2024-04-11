//Nombre: Diego Calvo Solis, carné: 00103322

#include <iostream>
#include <string>

using namespace std;

class Circulo
{
public: //se establecen atributos publicos segun indica el ejercicio. 
    string color;
    const float PI = 3.1416f;
    float radio = 0; 

    Circulo();
    Circulo(string _color, float _radio);

    string GetColor();

    float area();
};

int main()
{

    string color;
    float radio = 0;

    cout << "Digite el color del circulo: ";
    getline(cin, color);

    cout << "Digite el radio del circulo: ";
    cin >> radio;

    Circulo circulo = {color, radio}; //inicializando objeto con su constructor

    cout << "\nEl color del circulo es: " << circulo.GetColor() << endl;
    cout << "El area del circulo es: " << circulo.area() << endl;
  

    return 0;
}

Circulo::Circulo() {}

Circulo::Circulo(string _color, float _radio)
{
    color = _color;
    radio = _radio;
}

string Circulo::GetColor()
{
    return color;
}

float Circulo::area()
{
    return PI * (radio * radio);
}