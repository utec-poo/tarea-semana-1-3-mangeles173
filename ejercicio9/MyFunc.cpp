#include "MyFunc.h"

Tipo_double Convertirhor(Tipo_double num,Tipo_double hor){
  hor=num/3600.0;
  return hor;

}

Tipo_double Convertirmin(Tipo_double num,Tipo_double min, Tipo_double hor){
  min=(num-hor*3600.0)/60;
  return min;
}

Tipo_double Convertirseg(Tipo_double num,Tipo_double seg, Tipo_double hor, Tipo_double min){
  seg=num-(hor*3600.0+min*60.0);
  return seg;
}
