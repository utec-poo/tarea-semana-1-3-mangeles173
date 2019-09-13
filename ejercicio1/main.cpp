#include <iostream>

using namespace std;

int main() {

double base, altura, area;
cout << "Ingrese la base: \n";
cin >> base;
cout << "Ingrese la altura: \n";
cin >> altura;

if (base<0|| altura <0)
cout << "No existe un triángulo con lados negativos\n";
else{
area = base * altura /2.0;
cout <<"El area es: "<<area<<"\n";
}
  return 0;
}
