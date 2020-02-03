#include <string>
#include "Pedido.h"

using namespace std;

Pedido::Pedido(/* args */){
}
Pedido::Pedido(int c, int q, float p, string desc){
    this->cod = c;
    this->quant = q;
    this->preco = p;
    this->desc = desc;
}
