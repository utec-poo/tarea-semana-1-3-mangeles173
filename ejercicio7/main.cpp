//**Escribir un programa en C++, que permita leer un número entre 10 y 30 e imprima tantos * como indica el número. El programa debe verificar que el número que se ingresa se encuentra en el rango de 10 y 30 inclusive.
#include <iostream>
using namespace std;

int main() {
  int num=0;
  int i=1;

  cout <<"Ingrese un numero\n";
  cin>>num;

  if (num<10 || num>30){
    cout<<"Numero fuera del rango\n";
    cin>>num;
  }
  
  for (int i=1; i<=num; i++){
    cout << "*";
  }
     
  return 0;
}
