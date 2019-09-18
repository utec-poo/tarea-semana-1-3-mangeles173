#include <iostream>
using namespace std;

typedef long int tipo_entero;
tipo_entero LeeNumero();
tipo_entero Inverso(tipo_entero);

tipo_entero LeeNumero(){
  tipo_entero n=0;
  do{
    cout<<"Ingrese un número de 7 dígitos: \n";
    cin>>n;
  }while (n<1000000);
  return n;
  
}
tipo_entero Inverso(tipo_entero numero){
  tipo_entero Inverso=0, d;
  while (numero>0){
    d=numero%10;
    Inverso=Inverso*10+d; 
    numero=numero/10;
  }
return Inverso;
}

int main() {
  tipo_entero numero;
  numero=LeeNumero();
  if (numero==Inverso(numero)){
    cout<<"Es un número capicúa\n";
  }
  else{
    cout <<"No es un número capicúa\n";
  }

  return 0;
}
