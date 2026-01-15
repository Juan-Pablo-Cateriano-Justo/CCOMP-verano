
#include <iostream>
using namespace std;
/*
int main() {
    int y = 50;
    int *ptr = &y;   COMPLETAR
    
    // SOLO puedes escribir una línea más aquí
    *ptr= 200; 
    
    cout << "y = " << y << endl;   // debe imprimir 200
    return 0;
} */









/*
int main(){
    
    int v[5] = {10, 20, 30, 40 ,50};
    int *p = v; 
    
    for(int i=0 ; i< 5 ; i ++) {
        cout << "Elemento" << i << " : " << *(p+i) << endl; 
        }
    
    return 0; 
}*/

/*
void duplicarA(int a) {
    a=   a * 2;
    }

void duplicarB(int *p) {
    *p = *p * 2;
    }

int main() {
    int num = 7; 
    
    duplicarA(num);
    cout << "DuplicarA : " << num << endl;
    
    duplicarB(&num);
    cout << "DuplicarB : " << num << endl; 
    


}

*/

/*
void duplicar(int v[], int n) {
    for(int i=0; i <n; i++) {
        v[i] = 2 * v[i]; 
        }
    }

int main() {

    int datos[4] = {1,3,5,7};
    duplicar(datos, 4);
    
    for(int i= 0; i < 4; i++) {
        cout << datos[i] << " " << endl; 
    }
    
    return 0; 
}
*/

/*
int main(){
    int n; 
    cout << "Ingrese la cantidad de elementos: "; 
    cin >> n; 
    
    int *v = new int[n];
    
    for(int i= 0; i < n; i++) {
        v[i] = i * 2;
        }
    
    for(int i=0; i < n ; i++){
        cout << v[i] << " ";
    }
    
    delete[] v; //liberar memoria;
    
    return 0; 
}    
    
    
*/
/*
int main() {
    int n; 
    cout << "ingrese la cantidad de elementos: "; 
    cin >> n; 
    
    int *v= new int[n]; 
    
    for(int i=0; i < n ; i++) {
        cout << "ingrese el numero que quiere asignar: " << "numero[ " << i+1 << "]"; 
        cin >> v[i];
        
        
    }
    for(int i=0; i < n ; i++) {
        cout << v[i] << " "; 
        
    }
    
    delete[] v;
    
    return 0;
    
}
*/
/*
int main() {
    int v[5] = {10, 20 , 30, 40, 50};
    int *p = v;     //apunta a v[1]
    int *fin = v + 5;  //apunta al v[5];
    
    while(p < fin) {
        cout << *p << " "; 
        p++; 
        }
    return 0;
    
}*/


//punteros apunteros.
/*
int x; int *p = &x;  int **pp = &p; */
/*
int main(){
    int x = 10;
    int *p = &x;
    int **pp = &p; 
    
    cout << "x = " << x << endl; 
    cout << "*p = " << *p << endl; 
    cout << "**pp = " << **pp << endl; 
    
    return 0; 
    
    
    }
    */
    
/*
int main() {
    int filas = 3, columnas = 4;
    
    int **M = new int*[filas];
    for(int i=0 ; i < filas; i++){
        M[i] = new int[columnas];
        }
        
    for(int i=0; i < filas ; i++){
        for(int j=0; j < columnas; j++){
            M[i][j] = i+j;
            cout << M[i][j] << " ";
        }
        cout << endl; 
    }
    
    for (int i= 0; i < filas; i++){
        delete[] M[i];
    }
    delete[] M;
    
}    
    

//otra forma




int filas = 3, columnas = 4;



int **M = new int*[filas];

int* datos = new int[filas*columnas]

for(int i=0 ; i < filas; i++)

    M[i] = &datos[i*columnas]; 
    
*/
/*


void imprimir(int **M, int f, int c) {
    for(int i= 0; i <f ;  i++){
        for(int j=0; j < c; j++){
            cout << M[i][j] << " ";
            }
            cout << endl; 
        }
    }


int main(){
    int f= 2, c = 3; 
    int **M = new int*[f];
    for(int i=0; i< f; i++)
        M[i] = new int[c];
    
    for(int i=0; i < f; i++)
        for(int j=0; j<c; j++)
            M[i][j] = i + j;
        
    
    imprimir(M, f, c);
    
    for(int i=0; i < f; i++)
        delete[] M[i];
    delete[] M;
    
    return 0;
}
      */


#include <iostream>
using namespace std;

float Sum(float a, float b) { return a + b; }
float Res(float a, float b) { return a - b; }

typedef float(*Operation)(float, float);

int main() {
    Operation vp[2] = { &Sum, &Res }; 
    
    float a, b, c; 
    int opt;

    cout << "Ingresa dos numeros: ";
    cin >> a >> b;
    
    cout << "Elige operacion (0: Suma, 1: Resta): ";
    cin >> opt;

    if (opt >= 0 && opt < 2) {
        c = vp[opt](a, b); 
        cout << "Resultado: " << c << endl;
    } else {
        cout << "Opcion no valida." << endl;  
    }

    return 0;
}
    
