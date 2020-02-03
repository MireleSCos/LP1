#pragma once

#include "Mesa.h"
class Restaurante

{
    private:

    public:
        Restaurante();
        Restaurante(int n);
        int num;
        Mesa mesas[20] = {};
        void adicionaMesa(Mesa m);

};
