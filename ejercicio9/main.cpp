//**Desarrolle una función que reciba como parámetro una cantidad de segundos y realice la conversión a su equivalente en horas, minutos y segundos

#include <iostream>
#include "MyFunc.h"
#include "MyFunc.cpp"

using namespace std;

int main() {
  Tipo_double num,seg, min, hor;

  do {
    cout << "Cantidad total de segundos: ";
    cin >> num;
  } while (num <1.0);

 
  cout <<  "Se tienen "<<Convertirhor(num,hor)<< "horas\n";
  cout <<  "Se tienen "<<Convertirmin(num,hor,min)<< "minutos\n";
  cout <<  "Se tienen "<<Convertirseg(num,hor,min,seg)<<"segundos\n";

  return 0 ;
}
