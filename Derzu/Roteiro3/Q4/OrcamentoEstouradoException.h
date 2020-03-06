#pragma once 

#include <iostream>
#include <exception>
using namespace std;

class OrcamentoEstouradoException :public exception{
    private:
        /* data */
    public:
        OrcamentoEstouradoException(/* args */);
        ~OrcamentoEstouradoException();
};

