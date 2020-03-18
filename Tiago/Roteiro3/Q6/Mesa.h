#pragma once

#include "Pedido.h"

class Mesa
{
    private:
        
    public:
        Mesa();
        Mesa(int num);
        
        int num;
        Pedido pedidos[10] = {};

        void addPedido(Pedido p);
        float calcuConta();
        void zerarPedidos();
};


