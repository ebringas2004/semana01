#include <iostream>

using namespace std;

int main()
{
  int i = 23;
  short int si = 13;
  long int li = 40000;
  unsigned us = 23;
  float f= 1.243;
  double d= 134.341234;
  long double ld = 123456789.123;
  char c = 48;
  unsigned char uc = 48;
  bool b = true;
  
  const double CD = 1e-21;      // las constantes deben ser inicializadas
                                // todos los tipos de variables anteriores pueden ser constantes
                                // solo se tendrìa que anteponer "const" a su declaracion

  cout << "i = " << i << endl;
  cout << "si = " << si << endl;
  cout << "li = " << li << endl;
  cout << "us = " << us << endl;
  cout << "f = " << f << endl;
  cout << "d = " << d << endl;
  cout << "ld = " << ld << endl;
  cout << "c = " << c << endl;
  cout << "uc = " << uc << endl;
  cout << "b = " << b << endl;
  cout << "CD = " << CD << endl;


  si = i + d + f;                   // por que no salen los decimales
  cout << "si = " << si << endl;
  
  si = i + ld;                      // Negavito??? Que valor es el que sale y porque ???
  cout << "si = " << si << endl;
  
  us = i + ld;                      // Negavito??? Que valor es el que sale y porque ???
  cout << "us = " << us << endl;
}
