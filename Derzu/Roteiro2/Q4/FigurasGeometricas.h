#pragma once
#include "string"

using namespace std;

class FigurasGeometricas
{
    private:
        /* data */
    public:
        FigurasGeometricas();
        FigurasGeometricas(string n, float parm1, float parm2);
        string nome;
        float parm1, parm2;
        ~FigurasGeometricas();

        float calcArea();
};
