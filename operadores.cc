#include <iostream>

using namespace std;

int main()
{
  int x = 18;
  int y = 8;
  int suma, resta, multiplicacion, divisionentera, restomodular ;
  float divisionreal;
  int incremento, decremento;
  
  suma = x + y;
  resta = x - y;
  multiplicacion = x * y;
  divisionentera = x / y;
  restomodular = x % y;
  divisionreal = (float ) x  / y;  // o se le multiplica al numerador por 1.0


  cout << "Numeros: " << x << " y " << y <<endl;

  cout << "Operadores Aritmeticos" << endl;
  cout << "Suma = " << suma << endl;
  cout << "Resta = " << resta << endl;
  cout << "Multiplicacion = " << multiplicacion << endl;
  cout << "Division entera = " << divisionentera << endl;
  cout << "Resto modular = " << restomodular << endl;
  cout << "Division real = " << divisionreal << endl;

  // Operadores Unarios
  cout << endl; 
  cout << "Operadores Unarios" << endl;
  cout << "Incremento Antes de x : " << ++x << endl;
  cout << "Incremento Despues de x : " << x++<< endl;
  cout << "Valor final de x : " << x << endl;
  
  cout << "Decremento Antes de y : " << --y<< endl;
  cout << "Decremento Despues de y : " << y--<< endl;
  cout << "Valor final de y : " << y<< endl;
  
  // Operadores logicos
  cout << endl;
  cout << "Operadores Logicos" << endl;
  cout << "true es : " << true << endl;
  cout << "false es : " << false << endl;
  cout << "Negacion de true (!) : " << (!true) << endl;
  cout << "true or false (||): " << (true || false) << endl;
  cout << "true and false (&&): " << (true && false) << endl;
  
  // Operadores de Comparacion
  cout << endl; 
  cout << "Operadores de Comparacion" << endl;
  cout << "4 es menor a 5 : " << (4 < 5) << endl;
  cout << "4 es mayor 5 : " << (4 > 5) << endl;
  cout << "4 es menor igual a 5 : " << (4 <= 5) << endl;
  cout << "4 es mayor igual 5 : " << (4 >= 5) << endl;
  cout << "4 es igual a 5 : " << (4 == 5) << endl;
  cout << "4 es diferente a 5 : " << (4 != 5) << endl;

}
