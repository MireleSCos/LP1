#pragma once
#include "string"
#include "FigurasGeometricas.h"
using namespace std;

class Circulo: public FigurasGeometricas
{
private:
    /* data */
public:
    Circulo(/* args */);
    Circulo(string n,float parm1, float parm2);
    float calcArea();
    ~Circulo();
};

