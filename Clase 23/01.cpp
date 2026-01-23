#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Figura2D {
protected:
    int x;
    int y;
    string color;

public:
    Figura2D(int x, int y, string c) : x(x), y(y), color(c) {}

    virtual void mostrarInfo() {
        cout << "Punto x: " << x << endl;
        cout << "Punto y: " << y << endl;
        cout << "Color: " << color << endl;
    }

    virtual double Area() const = 0;

    virtual ~Figura2D() {}
};

class Linea : public Figura2D {
protected:
    int x2;
    int y2;

public:
    Linea(int x, int y, string c, int x2, int y2)
        : Figura2D(x, y, c), x2(x2), y2(y2) {}

    void mostrarInfo() override {
        Figura2D::mostrarInfo();
        cout << "Segundo punto x: " << x2 << endl;
        cout << "Segundo punto y: " << y2 << endl;
    }

    double Area() const override {
        return 0.0; // una línea no tiene área
    }
};

class Rectangulo : public Figura2D {
private:
    int base;
    int altura;

public:
    Rectangulo(int x, int y, string c, int b, int a)
        : Figura2D(x, y, c), base(b), altura(a) {}

    void mostrarInfo() override {
        Figura2D::mostrarInfo();
        cout << "Base: " << base << endl;
        cout << "Altura: " << altura << endl;
    }

    double Area() const override {
        return base * altura;
    }
};

class Circulo : public Figura2D {
private:
    int radio;

public:
    Circulo(int x, int y, string c, int r)
        : Figura2D(x, y, c), radio(r) {}

    void mostrarInfo() override {
        Figura2D::mostrarInfo();
        cout << "Radio: " << radio << endl;
    }

    double Area() const override {
        return M_PI * radio * radio;
    }
};
