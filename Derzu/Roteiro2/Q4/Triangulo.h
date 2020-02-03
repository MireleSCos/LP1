#pragma once
#include "string"
#include "FigurasGeometricas.h"


using namespace std;

class Triangulo: public FigurasGeometricas
{
private:
    /* data */
public:
    Triangulo(/* args */);
    Triangulo(string n,float parm1, float parm2);
    ~Triangulo();
    float calcArea();
};
