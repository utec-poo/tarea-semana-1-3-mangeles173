#include <iostream>
using namespace std;

int main() {
  int total=0, pares=0, impares=0;
  int numero= -1;
  
  while (numero != 0 ){
    cout <<"Ingrese los numeros: \n";
    cin>> numero;
    if (numero!=0)
      total++;
      if (numero%2==0){
      pares++;
      }
      else{
      impares++;
      }
  }
  cout << "Hay en total "<<total<<" numeros, de los cuales "<<pares-1<<" son pares y "<<impares<<" son impares\n";
  
  return 0;
}
