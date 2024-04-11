//ABSTRACTION

#include<iostream>

using namespace std;

//creando clase que será heredada en la clase principal "Employee"
class AbstractEmp{ 
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmp{

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

        void AskForPromotion(){ //definiendo el método que se utilizará
            if(Age > 30)
                cout<<Name<<" got promoted!"<<endl;
            else
                cout<<Name<<" Sorry, no promotion for you"<<endl;
        }

};

int main(){

    Employee employee1 = Employee("Diego", "Amazon", 25); //inicializando la variable definiendo los datos del constructor por default
    Employee employee2 = Employee("Jorge", "Avianca", 36);

    employee1.AskForPromotion();
    employee2.AskForPromotion();


    return 0;
}