#include "ClienteMayorConsumidor.h"

ClienteMayorConsumidor::ClienteMayorConsumidor(const std::string&nombre,string ci,int num_casa,double consumo):Cliente(nombre,ci,num_casa,consumo){}

double ClienteMayorConsumidor::costo_electricidad(){
    return consumo*0.09+(0.25*consumo*0.09);
}

