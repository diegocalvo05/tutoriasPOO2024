#include<iostream>

using namespace std;

class Empleado {
    private:
        string nombre;
        string compania;
        int edad;

    public:
        Empleado(){}

        Empleado(string nombre, string compania, int edad){
            this->nombre = nombre;
            this->compania = compania;
            this->edad = edad;
        }

        void setNombre(string nombre){
            this->nombre = nombre;
        }  

        string getNombre() {
            return this->nombre;
        }   

        void setCompania(string compania){
            this->compania = compania;
        }  

        string getCompania() {
            return this->compania;
        }   

        void setNombre(int edad){
            this->edad = edad;
        }  

        int getEdad() {
            return this->edad;
        }   
};