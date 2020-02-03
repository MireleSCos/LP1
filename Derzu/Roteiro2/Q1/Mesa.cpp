#include "Mesa.h"

Mesa::Mesa()
{
}

Mesa::Mesa(int num){
    this->num = num;
}

void Mesa::addPedido(Pedido p){
    
    for (int i = 0; i < 10; i++)
    {
        if(this->pedidos[i].cod == p.cod){
            this->pedidos[i].quant += p.quant;
        }
        else if(this->pedidos[i].cod == 0){
            this->pedidos[i] = p;
        } 
    }
}
float Mesa::calcuConta(){
    float conta = 0;
    for (int i = 0; i < 10; i++)
    {
        conta += this->pedidos[i].preco;
    }
    return conta;
}
void Mesa::zerarPedidos(){
    for (int i = 0; i < 10; i++)
    {
        this->pedidos[i].cod = 0;
    }
}