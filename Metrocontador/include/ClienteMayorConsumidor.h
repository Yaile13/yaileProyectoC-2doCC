#ifndef CLIENTEMAYORCONSUMIDOR_H
#define CLIENTEMAYORCONSUMIDOR_H
#include "Cliente.h"

using namespace std;

    class ClienteMayorConsumidor: public Cliente{
public:
    ClienteMayorConsumidor(const std::string&nombre,string ci,int num_casa,double consumo);
    double costo_electricidad()override;
};

#endif // CLIENTEMAYORCONSUMIDOR_H
