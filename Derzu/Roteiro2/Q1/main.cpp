#include <iostream>
#include "Pedido.h"
#include "Mesa.h"
#include "Restaurante.h"

using namespace std;

int main(void){
    
    Pedido p1 = Pedido(1,5,4,"Juice");
    Pedido p2 = Pedido(2,2,5,"Cake");
    Pedido p3 = Pedido(2,2,5,"Cake");

    Mesa m1 = Mesa(1);
    Mesa m2 = Mesa(2);

    m1.addPedido(p1);
    m1.addPedido(p2);

    m2.addPedido(p3);

    Restaurante r1 = Restaurante(1);

    r1.adicionaMesa(m1);
    r1.adicionaMesa(m2);
}