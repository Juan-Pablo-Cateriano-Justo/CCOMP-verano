/*
#include <iostream> 
#include <vector>
using namespace std; 


int main(){
  vector<int> v; 


//insertar elementos 
v.push_back(10);
v.push_back(20);
v.push_back(30); 

  cout<< "Vector inicial: " 
  for(int i=0 ; v.size() ; i++)
    cout<< v[i] << " "; 
  

  //Elminar ultimo elemento 
  v.pop_back(); 

  cout<< "Luego de pop_back(): ";
  for*int i=0 ; v.size() ; i++)
    cout<< v[i] << " "; 
  cout<< endl; 

  //verificar si esta vacio

  if(v.empty())
    cout<< " El vector esta vacio " << endl;

  else
    cout<< "El vector No esta vacio" << endl; 

  //limpiar todo

  v.clear();
  cout<< "Luego de clear(), tamano = " << v.size() << endl; 

  return 0;



}
  */


#include <iostream> 
#include <vector> 
using namespace std; 

int main(){
  vector<int> v; 

  v.push_back(100);
  v.push_back(200);
  v.push_back(300); 

  cout<< "Recorrido usando auto o iteradores: " << endl; 

  for(auto it = v.begin(); it != v.endl(); ++it){
    cout<< *it << endl; 
  }

    return 0; 
  
}
