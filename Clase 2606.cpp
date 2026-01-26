#include <iostream>
using namespace std; 

class Punto {
  double x, y; 

public: 
  Punto(double _x, double _y) : x(_x), y(_y) {}

  void mostrar() {
    cout<< " ( " << x << " , " << y << " ) " << endl; 
  }  
}; 

int main() {
  Punto* p2 = new Punto(5,6);
  p2->mostrar();

  delete p2; 
  return 0;
}



//Lo mismo que hacer: 
/*
int main() {
  Punto p1(2,3);
  p1.mostrar();

  return 0; 


  
}

*/
/*

#include <iostream> 
using namespace std; 

class Punto(){
  ouble x, y; 

  public: 
  Punto(double _x, double _y) : x(_x), y(_y) {}

  void mostrar(){
    cout<< " ( " << x << " , " << y << " ) " << endl;
  }

}; 

int main() {
  Punto* v[3]; 

  v[0] = new Punto(1,2);
  v[1] = new Punto(3,4);
  v[2] = new Punto(5,6);

  for(int i=0; i<3 ; i++){
    v[i]->mostrar();

  for(int i=0; i<3 ; i+){
    delete v[i]; 
  }
}


*/


#include <iostream> 
using namespace std; 

class Figura2D {
protected: 
  double x, y; 

public: 
  Figura2D(double _x, double _y) : x(_x), y(_y) {}

  virtual double area() const  =0;
};

class Rectangulo : public Figura2D {
double base, altura; 

public: 
  Rectangulo(double x, double y, double b, double h) : Figura2D(x,y), base(b), altura(h) {} 

  double area() const override {
    return base * altura
  } 
};


class Circulo : public Figura2D {
  double radio;
public: 
  Circulo(double x, double y, double r) : Figura2D(x,y), radio(r) {} 

  double area() const override{
    return M_PI * radio * radio; 
  } 

}; 


int main(){
 Figura2D* figuras[2] 
figuras[0] = new Rectangulo(0,0,4,5);
figuras[1] = new Ciruclo(0,0,3);

for(int i=0; i<2 ; i++){
  
} 

for(int i=0; i<2 ; i++){
  cout<< figuras[i]->area() << endl; 


return 0; 
}

#include <iostream>
using namespace std;


class Archivo {
public: 
	Archivo(){
		cout<< "Constructor de Archivo" << endl; 
	}
	
	virtual ~Archivo() {
		cout<< "Destructor de Archivo " << endl; 
	} 
	
	
};

class ArchivoTexto  : public Archivo {
public: 
	ArchivoTexto(){
		cout<< "Constructor de ArchivoTexto" << endl;
	}
	
	~ArchivoTexto() {
		cout<< "Destructor de ArchivoTexto" << endl; 
	} 
};
	
class ArchivoBinario : public Archivo {

public: 
	ArchivoBinario(){
		cout<< "Constructor de ArchivoBinario" << endl; 
	}
	
	~ArchivoBinario() {
		cout<< "Destructor de ArchivoBinario" << endl; 
	}
};


int main() {
	

	Archivo* a1 = new ArchivoTexto();
	

	delete a1;
	
	cout << "\n--------------------------\n";
	
	
	Archivo* a2 = new ArchivoBinario();
	
	
	delete a2;
	
	return 0;
}		
		
		
		
		
		
		
		

