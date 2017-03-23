#include <iostream>

using namespace std;
int main()
{
  int n;

  cout << "Entre un numero : ";
  cin >> n;
  
  // Bucle: for
  cout << "Bucle: for" << endl;
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<=(n - i - 1) ; j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }

  // Bucle: do while
  cout<<endl;
  cout << "Bucle: do while" << endl;
  int i=1;
  
  cout << "Numeros Pares menor que n ="<< n << endl;
  do
  {
    if( i % 2 == 0)
    {
      cout<< i << " ";
    }
    i++;

  } while( i<= n);
  cout<<endl;
  

  // Bucle: while
  cout<<endl;
  cout << "Bucle: while" << endl;
  int j=1;
  
  cout << "Numeros Impares menor que n ="<< n << endl;
  while (j < n)
  {
    if( j % 2 == 1)
    {
      cout<< j << " ";
    }
    j++;

  };
  cout<<endl;
  
}
