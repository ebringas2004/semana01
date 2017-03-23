#include <iostream>

using namespace std;
int main()
{
  int edad;
  string nombre;

  cout<< "Condicional : if - else if - else" << endl;
  cout<< endl;
  
  cout<< "Ingresa tu nombre y edad:" << endl;
  cin >> nombre;
  cin >> edad;

  cout<< "Hola " << nombre << endl;
  if (edad < 18)
  {
     cout << "Eres menor de Edad" << endl;
  }
  else if(edad < 33)
  {
    cout << "Eres mayor de edad pero menor de 33 años"<< endl;
  }
  else if(edad < 50)
  {
    cout << "Tienes mas o igual a 33 años pero menor de 50  años"<< endl;
  }
  else
    cout << "Tienes  50 o mas años"<< endl;

  char calificacion;
  int nota=0;
  
  cout << endl;
  cout<< "Condicional : switch" << endl;
  cout << "Ingresa tu Nota (A, B, C, D o E) :";
  cin >> calificacion;
  
  switch(calificacion)
  {
    case ('A'): nota = 20; break; 
    case ('B'): nota = 15; break; 
    case ('C'): nota = 10; break; 
    case ('D'): nota = 05; break; 
    case ('E'): nota = 0; break; 
    default: nota = -1;
  }
  
  if (nota == -1)
    cout << "Calificacion No Valida " << endl;
  else
    cout << "Nota = " << nota << endl;
    
  cout<< endl;

}
