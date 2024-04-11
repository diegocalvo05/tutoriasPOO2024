#include <iostream>

class Persona
{
private: 
    std::string m_nombre;
    int m_edad;

public:
    Persona(){};

    Persona(std::string nombre, int edad)
    {
        m_nombre = nombre;
        m_edad = edad;
    }

    void SetNombre(std::string nombre)
    {
        m_nombre = nombre;
    }

    std::string GetNombre()
    {
        return m_nombre;
    }

    void SetEdad(int edad)
    {
        m_edad = edad;
    }

    int GetEdad()
    {
        return m_edad;
    }

    void MostrarPersona()
    {
        std::cout << "Nombre: " << m_nombre << std::endl;
        std::cout << "Edad: " << m_edad << std::endl;   
    }
};

class Empleado : public Persona
{
private:
    std::string m_empresa;
    float m_salario = 0;

public: 
    Empleado(std::string nombre, int edad, std::string empresa, float salario) : Persona(nombre, edad)
    {
        m_empresa = empresa;
        m_salario = salario;
    }

    void SetEmpresa(std::string empresa)
    {
        m_empresa = empresa;
    }

    std::string GetEmpresa()
    {
        return m_empresa;
    }

    void SetSalario(float salario)
    {
        m_salario = salario;
    }

    void mostrarEmpleado()
    {
        MostrarPersona();

        std::cout << "Empresa: " << m_empresa << std::endl;
        std::cout << "Salario: " << m_salario << std::endl;
    }
};

class Alumno : public Persona
{
private: 
    std::string m_code;
    float m_notaFinal;

public:
    Alumno(std::string nombre, int edad, std::string code, float notaFinal) : Persona(nombre, edad)
    {
        m_code = code;
        m_notaFinal = notaFinal;

    }

    void SetCode(std::string code)
    {
        m_code = code;
    }

    std::string GetCode()
    {
        return m_code;
    }

    void SetNotaFinal(float notaFinal)
    {
        m_notaFinal = notaFinal;
    }

    float GetNotaFinal()
    {
        return m_notaFinal;
    }

    void mostrarAlumno()
    {
        MostrarPersona();

        std::cout << "Codigo alumno: " << m_code << std::endl;
        std::cout << "Nota final: " << m_notaFinal << std::endl;
    }
};

class Universitario : public Alumno
{
private: 
    std::string m_facultad;
    std::string m_carrera;

public:
    Universitario(std::string nombre, int edad, std::string code, float notaFinal, std::string facultad, std::string carrera) : Alumno(nombre, edad, code, notaFinal)
    {
        m_facultad = facultad;
        m_carrera = carrera;
    } 

    void SetFacultad(std::string facultad)
    {
        m_facultad = facultad;
    }

    std::string GetFacultad()
    {
        return m_facultad;
    }

    void SetCarrera(std::string carrera)
    {
        m_carrera = carrera;
    }

    std::string GetCarrera()
    {
        return m_carrera;
    }

    void mostrarUniversitario()
    {
        mostrarAlumno();

        std::cout << "Facultad: " << m_facultad << std::endl;
        std::cout << "Carrera: " << m_carrera << std::endl;
    }
};


int main()
{

    Alumno alumno1 = {"Alejandro", 20, "dd222", 9.3f};
    Empleado empleado1 = {"Jorge", 29, "Google", 2999.8f};
    Universitario universitario1 = {"Diego", 19, "00103322", 8.75f, "Ing y Arq", "Ing Informatica"};

    alumno1.SetNotaFinal(7.9f);

    alumno1.mostrarAlumno();

    std::cout << "-----------------------------------" << std::endl;

    empleado1.mostrarEmpleado();

    std::cout << "-----------------------------------" << std::endl;

    universitario1.mostrarUniversitario();

    
    return 0;
}