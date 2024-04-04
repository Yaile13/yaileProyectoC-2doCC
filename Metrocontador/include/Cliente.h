#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>

using namespace std;
class Cliente{
protected:
    string nombre;
    string ci;
    int num_casa;
    double consumo;

public:

    Cliente(const string& nombre,string ci,int num_casa,double consumo);

    virtual double costo_electricidad();
    string getNombre();
    double getConsumo();

    };

#endif // CLIENTE_H
