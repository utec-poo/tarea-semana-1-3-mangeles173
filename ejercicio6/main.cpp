#include <iostream>

using namespace std;
int main() {
  int num,dig1,dig2, dig3,i=0;
  int par=0, impar=0;

  
  cout << "Ingrese un numero de 3 dígitos: \n";
  cin >> num;
  dig3=num%10;
  dig2=(num/10)%10;
  dig1=(num/10)/10;

  if (dig1==0){
    cout<<"Debe ingresar un numero de 3 dígitos\n";
  }
  else{
    if (dig1!=0){
      if (dig1%2==0)
        par++;
      else
        impar++;
    }
    if (dig2!=-1){
      if (dig2%2==0)
        par++;
      else
        impar++;
    }
    if (dig3!=-1){
      if (dig3%2==0)
        par++;
      else
        impar++;
    }
    cout<<"El numero tiene 3 dígitos, de los cuales "<<par<<" son pares y "<<impar<<" son impares.\n";
  }
 
  return 0;
}
