//**leer un número entre 1 y 30 e imprima un triángulo con asteriscos. El triángulo tendrá tantas filas como indica el número.

#include<iostream>
using namespace std;
 
int main()
{
	int i;
	int valor;
 
	cout<<"introduzca valor (1-30)\n";
	cin>>valor;

  if (valor<1 || valor>30){
    cout<<"Numero fuera del rango\n";
  }
  for (int i=1; i<=valor; i++){
    for(int a=1; i>=a; a++)
      cout<<"*";
      cout<<"\n";
  }
  return 0;
}
