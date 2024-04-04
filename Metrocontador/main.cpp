#include <iostream>
#include "Cliente.h"
#include "ClienteMayorConsumidor.h"
#include "ClienteMenorConsumidor.h"
#include "ControlElectrico.h"

using namespace std;

int main()
{
    int a;
    int i = 0;
    ControlElectrico control;
    while(a != 2){
        cout << "Si deseas agregar un cliente marque 1 y si deseas terminar marque 2:" << endl;
        cin >> a;
        if(a == 1){
            cout << "Ingrese el nombre del cliente, carne de identidad, el numero de la casa y  el consumo de electricidad en kWh" << endl;
            string nombre;
            string ci;
            int num_casa;
            double consumo;
            cin >> nombre >> ci >> num_casa >> consumo;

            if(consumo >= 500){
                Cliente* mayor = new ClienteMayorConsumidor(nombre,ci,num_casa,consumo);
                control.addCliente(mayor);
            }else{
                Cliente* menor = new ClienteMenorConsumidor(nombre,ci,num_casa,consumo);
                control.addCliente(menor);
            }
            control.show();
        }
        i++;
        if(i > 1){
            cout << "\1El consumo en total de todos los clientes agregados es de:" << control.totalConsumo() << endl;
        }
    }

return 0;

};



