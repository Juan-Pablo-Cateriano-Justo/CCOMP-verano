
/*
class Persona {

protected: 
	string nombre;
	int edad;

public: 
	
	Persona(string n, int e) : nombre(n), edad(e) {}
	
	void mostrarDatos(){
		cout<< "Nombre: " << nombre << "edad: " << edad << endl; 
	}
};


class Estudiante : public Persona {
	
private: 
	
	string carrera; 
	double promedio; 

public: 
	
	Estudiante(string  n, int e, string c, double p) : Persona(n, e), carrera(c), promedio(p) {}
	
	
	void mostrarEstudiante(){ 
		mostrarDatos(); 
		cout<< "Carrera : " << carrera << endl; 
		cout<< "Promedio: " << promedio << endl; 
	}
	
};

int main() {
	Estudiante e("Ana", 21, "Derecho", 18.45); 
	e.mostrarEstudiante();
	
	
	
	return 0;
}
*/
/*
#include <iostream> 
#include <string> 
using namespace std; 


class Animal {

protected:
	string nombre;
	int edad; 
	
public: 
	
	Animal(string n, int e) : nombre(n), edad(e) {}
	virtual void hacerSonido(){
		cout<< "Realiza sonido generico.." << endl;
	}
}; 


class Perro : public Animal {
	
private: 
	string raza; 
	string juguete;
	
public:
	
	Perro(string n, int e, string r, string j) : Animal(n, e), raza(r), juguete(j) {}
	
	
	void hacerSonido() override {
		cout << "Guau!  Guau! " << endl; 
	}
};

int main() {
	Perro d("Mauricio", 6 , "Pudolf", "Hueso de juguete"); 
	
	d.hacerSonido();
	
	
	
}
*/

/*
#include <iostream>
#include <string> 
using namespace std; 

class Vehiculo {
protected: 
	string marca; 
	int velocidadMaxima; 
	
public: 
	
	void mostrarDatos(){
		cout<< "Marca: " << marca << endl; 
		cout<< "Velocidad Maxima: " << velocidadMaxima << endl; 
	}
	
};

class Auto : public Vehiculo {
private: 
	int numeroPuertas; 
	
};
*/





//En computacion cientifica y graficos por computadora se utilizan estructuras como vectores(1 dimension) matrices(2 dimensioenes) (recuerden que pueden ser muchas dimensiones más)
//Se pide diseñar una jerarquia de clases usando herencia que cumpla: UNa clase base llamada Estructura. Una clase derivada Vector. Una clase derivada Matriz. 
//TOdos deben Almacenar sus datos dinámicamente, conocer sus dimensiones y tener método mostrarDimensiones(); 
// ¿que atributos deben ir en clase base? ¿cuales deben ser protedted para que las 
//#include <iostream>
//#include <string>
//using namespace std; 

/*
class Estructura {
	int filas; 
	int columnas; 
	
	
public: 
	
	Estructura( int f, int c) : filas(f), columnas(c) {}
	
	virtual void  mostrarDim(){
		cout<< "filas: " << filas << endl; 
		cout<< "columnas: " << columnas << endl;
	}
		
	virtual ~Estructura() {}
};

class Vector : public Estructura {
	
private:
 double* datos;
 
public: 
	Vector( int m)  : Estructura(1, n) {
		datos = new double[n];
	}
	
	~Vector() {
		delete[] datos;
	}
	
	void mostrarDim() override {
		cout<< "Vector de dimension: " << columnas << endl; 
	}
};

class Matriz : public Estructura {

private: 
	double** datos;

public: 
	Matriz(int f, int c) : Estructura(f, c) { 
		datos = new double*[f];
		for(int i=0; i< f ; i++){
			datos[i] = new double[c]; 
		}
	
	void mostrarDim() override{
			cout<< "Matriz de: " << filas << " x " << columnas << endl; 
		}
};

	
int main(){
	Vector v(5,4) 
	Matriz m(3,4); 
	
	v.mostrarDim();
	m.mostrarDim();

}
*/
/*
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
*/




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
		return 0.0; 
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


int main() {

    // Punteros a la clase base (polimorfismo)
    Figura2D* f1 = new Linea(0, 0, "Rojo", 4, 5);
    Figura2D* f2 = new Rectangulo(2, 3, "Azul", 6, 4);
    Figura2D* f3 = new Circulo(5, 5, "Verde", 3);

    cout << "=== Linea ===" << endl;
    f1->mostrarInfo();
    cout << "Area: " << f1->Area() << endl << endl;

    cout << "=== Rectangulo ===" << endl;
    f2->mostrarInfo();
    cout << "Area: " << f2->Area() << endl << endl;

    cout << "=== Circulo ===" << endl;
    f3->mostrarInfo();
    cout << "Area: " << f3->Area() << endl << endl;

    // Liberar memoria
    delete f1;
    delete f2;
    delete f3;

    return 0;
}

