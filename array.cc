#include <iostream>
using namespace std;



int main ()
{
  int arreglo [] = {16, 2, 77, 40, 12071};
  int i, suma=0, max=0, min=10000;
  
  int puntoxy [2][3] = {{1,2,3},{4,5,6}};   // Matriz de Dos Dimensiones
  int puntoxyz [2][2][2] = {{{1,2},{3,4}},{{5,6},{7,8}}};   // Matriz de Dos Dimensiones
  int primos[]{2,3,5,7,11};                                  // Inicializando en C++ 
  int ejex [20];
  ejex[0] = 3;
  ejex[1] = 13;
  

  for ( i=0 ; i< 5 ; ++i )
  {
    suma += arreglo[i];
    
    if(max < arreglo[i] )
       max = arreglo[i];
       
    if (min > arreglo[i])   
       min = arreglo[i];
  }
  cout << "Suma   = " << suma << endl;
  cout << "Maximo = " << max << endl;
  cout << "Minimo = " << min << endl;
 
  return 0;
}

