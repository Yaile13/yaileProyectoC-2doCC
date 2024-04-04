#include "ControlElectrico.h"

ControlElectrico::ControlElectrico(){}
void ControlElectrico::addCliente(Cliente* cliente){
    clientes.push_back(cliente);
}
void ControlElectrico::show(){
    for(auto cliente : clientes)
    std:: cout << "El nombre del cliente es " << cliente->getNombre() << " con " << cliente->getConsumo() << " kWh de consumo y un costo de electricidad de " << cliente->costo_electricidad() << std:: endl;
}

double ControlElectrico::totalConsumo(){
    double r;
    for(auto & cliente : clientes){
        r += cliente->getConsumo();
    }
    return r;
}

