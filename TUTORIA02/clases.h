#include<iostream>

using namespace std;

class Empleado {
    private:
        
        string compania;
        int edad;
        string nombre;

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

class Maestro : public Empleado {

    private:

        string materia;
        string codigoMaestro;
        int horasExtra = 0;

    public:

        Maestro() {}

        Maestro(string nombre, string compania, int edad, string materia, string codigoMaestro) : Empleado(nombre, compania, edad) {
            this->materia = materia;
            this->codigoMaestro = codigoMaestro;
        }

        string getMateria() {
            return this->materia;
        }

        void setMateria(string materia) {
            this->materia = materia;
        }
    
        string getCodigoMaestro() {
            return this->codigoMaestro;
        }

        void setCodigoEmpleado(string codigoEmpleado) {
            this->codigoMaestro = codigoMaestro;
        }        

        int getHorasExtra() {
            return this->horasExtra;
        }

        void setHorasExtra(int horasExtra) {
            this->horasExtra = horasExtra;
        }

        void agregarHorasExtra(int nHoras) {
            horasExtra += nHoras;
        }

        void imprimirDatos() {
            cout << "nombre: " << this->getNombre() << endl;
            cout << "compania: " << this->getCompania() << endl;
            cout << "edad: " << this->getEdad() << endl;
            cout << "materia: " << this->materia << endl;
            cout << "codigo: " << this->codigoMaestro << endl;
            cout << "horas extra: " << this->horasExtra << endl;

        }

};