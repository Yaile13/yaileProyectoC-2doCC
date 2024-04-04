#include "ClienteMenorConsumidor.h"

ClienteMenorConsumidor::ClienteMenorConsumidor(const std::string&nombre, string ci,int num_casa,double consumo):Cliente(nombre,ci,num_casa,consumo){}

double ClienteMenorConsumidor::costo_electricidad(){
    return consumo*0.09;
}
