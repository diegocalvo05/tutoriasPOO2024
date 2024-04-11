//ENCAPSULACIÓN
//Getters y setters

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

        void setName(string name){ //setter

            if(name != "") //seteando validaciones 
                Name = name;
        }

        string getName(){ //getter
            return Name;
        }

        void setCompany(string company){
            
            if(company != "")
                Company = company;
        }

        string getCompany(){
            return Company;
        }

        void setAge(int age){

            if(age >= 18)
                Age = age;
        }

        int getAge(){
            return Age;
        }

};

int main(){

    Employee employee1 = Employee("Diego", "Amazon", 25); //inicializando la variable definiendo los datos del constructor por default
    Employee employee2 = Employee("Jorge", "Avianca", 36);

    employee1.data();
    employee2.data();

    //usando getters y setters para acceder a los objetos privados
    employee1.setAge(15);
    cout<<"\n"<<employee1.getName()<<" is "<<employee1.getAge()<<" years old"<<endl;

    employee1.setName("JuanCarlos");
    cout<<"New name for employee is: "<<employee1.getName()<<endl;

    employee1.setCompany("META");
    cout<<"New company for "<<employee1.getName()<<" is "<<employee1.getCompany()<<endl;


    return 0;
}