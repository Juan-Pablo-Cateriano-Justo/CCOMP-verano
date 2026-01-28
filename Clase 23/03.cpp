#include <iostream> 
#include <list> 
usgin namespace std; 

int main(){
  list<int> L;

  L.push_back(10); 
  L.push_back(20);
  L.push_front(30);
  L.push_front(1); 

  cout << " Elementos de la lista: " << endl; 

  for(list<int>::iterator it = L.begin();
      it != L.end(); it++)
    {
       cout << *it << endl;    
      }

  return 0; 

  
}

/*
int main(){
  list<int> L;

  L.push_back(10); 
  L.push_back(20);
  L.push_front(30);
  L.push_front(1); 

  cout << " Elementos de la lista: " << endl; 

  for(list<int>::iterator it = L.begin();
      it != L.end(); it++)
    {
       cout << *it << endl;    
      }

  return 0; 

  
}
*/
/*
int main(){
    list<int> L; 
    
    L.push_back(10);
    L.push_back(20);
    L.push_front(5);
    L.push_front(1);
    
    cout<< "Eliminando el primero y el ultimo.. " << endl; 
    
    L.pop_front();
    L.pop_back();
    
    for(list<int>::iterator it = L.begin();
        it != L.end() ; it++)
        {
            cout<< *it << endl; 
            
            }
    
    return 0;
}
*/

/*
#include <iostream> 
#include <list> 
using namespace std; 

class Figura{
    
public: 
    virtual double area() const=0;
    virtual ~Figura() {}
};


class Rectangulo : public Figura {
    double b, h; 
    
public: 
    Rectangulo(double b, double h) : b(b), h(h)  {}
    double area() const override { return  b * h;  }
    
    
class Circulo : public Figura {
        double r;
public: 
    Circulo(double r) : r(r) {}
    double area() const override { return 3.1416 * r * r; }
};

int main(){
    list<Figura*> figuras; 
    
    figuras.push_back(new Rectangulo(4,3));
    figuras.push_back(new Circulo(2));
    
    for(list<Figura*>::iterator it= figuras.begin() ;  
        it != figuras.end() ; it++)
        {
            cout<< "Area =  " 
                << (*it)->area() << endl; 
            }
    
    for(Figura* f : figuras){
            delete f; 
        }
    
    return  0; 
    } 
#include <iostream>
using namespace std;

class Pila {
private:
    int datos[100];
    int tope;

public:
    Pila() {
        tope = -1;
    }

    bool isEmpty() {
        return tope == -1;
    }

    bool isFull() {
        return tope == 99;
    }

    int size() {
        return tope + 1;
    }

    void push(int v) {
        if (!isFull()) {
            datos[++tope] = v;
        } else {
            cout << "Pila llena" << endl;
        }
    }

    void pop() {
        if (!isEmpty()) {
            tope--;
        } else {
            cout << "Pila vacia" << endl;
        }
    }

    int top() {
        if (!isEmpty()) {
            return datos[tope];
        }
        cout << "Pila vacia" << endl;
        return -1;
    }
};


int main() {
    Pila p;

    p.push(10);
    p.push(20);
    p.push(30);

    cout << "Tope: " << p.top() << endl;
    cout << "Tamaño: " << p.size() << endl;

    p.pop();
    cout << "Nuevo tope: " << p.top() << endl;

    p.pop();
    p.pop();
    p.pop(); 

    return 0;
}
*/
/*
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> pila;

    pila.push(10);
    pila.push(20);
    pila.push(30);

    cout << "Elemento del tope: " << pila.top() << endl;
    cout << "Tamaño de la pila: " << pila.size() << endl;

    pila.pop(); 

    cout << "Nuevo tope: " << pila.top() << endl;

    while (!pila.empty()) {
        cout << "Sacando: " << pila.top() << endl;
        pila.pop();
    }

    return 0;
}
*/


/*
#include <iostream>
#include <stack>
using namespace std;

class Figura {
public:
    virtual void dibujar() const = 0;
    virtual double area() const = 0;

    virtual ~Figura() {}
};

class Rectangulo : public Figura {
    double ancho, alto;

public:
    Rectangulo(double a, double h) : ancho(a), alto(h) {}

    void dibujar() const override {
        cout << "Dibujando un Rectangulo" << endl;
    }

    double area() const override {
        return ancho * alto;
    }
};

class Circulo : public Figura {
    double radio;

public:
    Circulo(double r) : radio(r) {}

    void dibujar() const override {
        cout << "Dibujando un Circulo" << endl;
    }

    double area() const override {
        return 3.1416 * radio * radio;
    }
};

int main() {
    stack<Figura*> figuras;

    figuras.push(new Rectangulo(4, 5));
    figuras.push(new Circulo(3));
    figuras.push(new Rectangulo(2, 6));

    while (!figuras.empty()) {
        Figura* f = figuras.top();

        f->dibujar();
        cout << "Area: " << f->area() << endl;

        figuras.pop();
        delete f;
    }

    return 0;
}

*/

#include <iostream>
#include <queue> 

using namespace std; 

int main(){
  queue<int> cola;

  cola.push(10);
  cola.push(20); 
  cola.push(30); 

  cout<< "Frente: " << cola.front() << endl;

  cola.pop();

  cout<< "Nuevo frente: " << cola.front() << endl; 

  return 0;   
}
