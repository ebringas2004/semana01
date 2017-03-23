#include <iostream>

using namespace std;
int main()
{
  string nombre1;
  string nombre2;
  string apellidopaterno;
  string apellidomaterno; 
  int edad;

  cout<< "Ingresa tus Datos Personales:" << endl;
  cout<< "Primer Nombre : " ;
  cin >> nombre1;
  cout<< "Segundo Nombre : ";
  cin >> nombre2;
  cout<< "Apellido Paterno : " ;
  cin >> apellidopaterno;
  cout<< "Apellido Materno : " ;
  cin >> apellidomaterno;
  cout<< "Edad : " ;
  cin >> edad;
  
  cout << "Hola " << nombre1 << " " << nombre2 << " "
       << apellidopaterno << " " << apellidomaterno 
       << " de "<< edad << " años " << endl;


}
