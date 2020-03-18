#pragma once

#include "string"


using namespace std;

class Pedido
{
    private:
        
    public:
        Pedido();
        Pedido(int c, int q, float p, string desc);

        int cod, quant;
        float preco;
        string desc;

};




