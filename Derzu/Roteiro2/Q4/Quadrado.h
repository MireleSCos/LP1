#pragma once
#include "string"
#include "FigurasGeometricas.h"


using namespace std;

class Quadrado: public FigurasGeometricas
{
private:
    /* data */
public:
    Quadrado();
    Quadrado(string n,float parm1, float parm2);
    ~Quadrado();
    float calcArea();
};
