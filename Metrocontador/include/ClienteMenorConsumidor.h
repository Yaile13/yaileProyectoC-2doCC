#ifndef CLIENTEMENORCONSUMIDOR_H
#define CLIENTEMENORCONSUMIDOR_H
#include "Cliente.h"

using namespace std;

class ClienteMenorConsumidor : public Cliente{
    public:
    ClienteMenorConsumidor(const string&nombre,string ci,int num_casa,double consumo);
    double costo_electricidad()override;
};


#endif // CLIENTEMENORCONSUMIDOR_H
