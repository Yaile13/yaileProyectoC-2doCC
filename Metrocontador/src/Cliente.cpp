#include "Cliente.h"
#include <iostream>

Cliente::Cliente(const string& nombre,string ci,int num_casa,double consumo):nombre(nombre),ci(ci),num_casa(num_casa),consumo(consumo){}

double Cliente::costo_electricidad(){
    return 0;
}

string Cliente::getNombre(){
    return nombre;
}

double Cliente::getConsumo(){
    return consumo;
}


