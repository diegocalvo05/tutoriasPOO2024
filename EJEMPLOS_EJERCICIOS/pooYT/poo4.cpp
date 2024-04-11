//INHERITANCE

#include<iostream>

using namespace std;

//creando clase que será heredada en la clase principal "Employee"
class AbstractEmp{ 
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmp{ //clase base

    private: 
        //objetos: 
        string Company;
        int Age;

    protected:
        string Name; //access modifier para poder acceder a la variable Name desde un hijo de la clase Employee

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

class Developer:public Employee{ //child de la clase base Employee, las herencias estan privadas por default así que la seteamos public

    private:
        string favPL;

    public:
        Developer(string name, string company, int age, string favpl):Employee(name, company, age){
            favPL = favpl;
        }
    
        void setFavPL(string ProgramingL){ //setter
            favPL = ProgramingL;
        }

        string getFavPL(){ //getter
            return favPL;
        }

        void fixBug(){
            cout<<Name<<" fixed bug using "<<getFavPL()<<endl; //Accedemos a Name sin necesidad de un getter debido a que es protected en la clase base
        }
};

class Teacher:public Employee{

    private:
        string Subject;

    public: 
        Teacher(string name, string company, int age, string subject):Employee(name, company, age){ //constructor
            Subject = subject;
        }

        void setSubject(string subject){
            Subject = subject;
        }

        string getSubject(){
            return Subject;
        }

        void prepLesson(){
            cout<<Name<<" is preparing "<<getSubject()<<" lesson"<<endl;
        }

};

int main(){

    Developer d = Developer("Saldina", "YouTube", 27, "C++");
    Teacher teacher = Teacher("John", "Hardvard", 46, "Calculus");

    d.fixBug();
    d.AskForPromotion(); //accediendo a métodos heredados

    teacher.prepLesson();
    teacher.AskForPromotion(); 

    return 0;
}