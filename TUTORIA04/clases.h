#include<iostream>

using namespace std;

class Poligono { //clase abstracta (NO SE PUEDE INSTANCIAR)
    protected:
        int nLados;

    public:
        Poligono(int nLados) {
            this->nLados = nLados;
        }

        virtual double calcularPerimetro() = 0; //metodo virtual puro
        virtual double calcularArea() = 0; //metodo virtual puro
};

class Triangulo : public Poligono {
    private:
        float l;
        float h;

    public:
        Triangulo(float l, float h) : Poligono(3) {
            this->l = l;
            this->h = h;
        }

        double calcularPerimetro() {
            return nLados * l;
        }

        double calcularArea() {
            return (l * h)/2;
        }
};

class Hexagono : public Poligono {
    private:
        float l;
        float a;
    
    public:
        Hexagono(float l, float a) : Poligono(6) {
            this->l = l;
            this->a = a;
        }

        double calcularPerimetro() {
            return nLados * l;
        }

        double calcularArea() {
            return (this->calcularPerimetro() * a)/2;
        }
};
