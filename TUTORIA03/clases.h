#include <iostream>

using namespace std;

class Animal {
    private:
        int edad;
    
    public: 
        Animal(int edad) {
            this->edad = edad;

            this->edad++;
        }

        int getEdad() {
            return this->edad;
        }

        virtual void comer() {
            cout << "Soy un animal y como";
        }
};

class Humano : public Animal{
    private: 
        string nombre;
    
    public:
        Humano(int edad, string nombre) : Animal(edad) {
            this->nombre = nombre;
        }

        void comer() {
            cout << "Me llamo " << nombre << ", y como sentado, en una mesa, con cubiertos" << endl;
        }
};

class Perro : public Animal{
    private:
        string nombre;
        string raza;

    public:
        Perro(int edad, string nombre, string raza) : Animal(edad) {
            this->nombre = nombre;
            this->raza = raza;
        }

        void comer() {
            cout << "Me llamo " << nombre << ", y como en el suelo, en un cumbito" << endl;
        }
};