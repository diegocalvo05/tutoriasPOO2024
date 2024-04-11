//clases, objetos y métodos dentro de las clases. 
//access modifiers: private, public, protected
//creando un constructor 

#include<iostream>

using namespace std;

class Employee{

    private: 
        //objetos: 
        string Name;
        string Company;
        int Age;

    public: 
        //métodos:
        Employee(string name, string company, int age){ //constructor

            Name = name;
            Company = company;
            Age = age;
        }

        void data(){
            
            cout<<"Name: "<<Name<<endl;
            cout<<"Company: "<<Company<<endl;
            cout<<"Age: "<<Age<<endl;
        }
};

int main(){

    Employee employee1 = Employee("Diego", "Amazon", 25); //inicializando la variable definiendo los datos del constructor por default
    Employee employee2 = Employee("Jorge", "Avianca", 36);

    employee1.data();
    employee2.data();


    return 0;
}