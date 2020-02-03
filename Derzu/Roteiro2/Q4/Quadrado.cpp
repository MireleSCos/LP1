#include "Quadrado.h"
#include "string"

using namespace std;

Quadrado::Quadrado(): FigurasGeometricas()
{
}
Quadrado::Quadrado(string n,float parm1, float parm2): FigurasGeometricas(n,parm1,parm2)
{
}

Quadrado::~Quadrado()
{
}
float Quadrado::calcArea(){
    return parm1 * parm2;
}