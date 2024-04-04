#ifndef CONTROLELECTRICO_H
#define CONTROLELECTRICO_H
#include "Cliente.h"
#include <vector>

using namespace std;


class ControlElectrico
{
    vector<Cliente*>clientes;

    public:
        ControlElectrico();
        void addCliente(Cliente* cliente);
        void show();
        double totalConsumo();


};

#endif // CONTROLELECTRICO_H
