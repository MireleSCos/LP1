#include "Circulo.h"
#include "string"

using namespace std;
Circulo::Circulo(/* args */) : FigurasGeometricas()
{

}

Circulo::Circulo(string n,float parm1, float parm2) : FigurasGeometricas(n,parm1,parm2)
{
}

Circulo::~Circulo()
{
}
float Circulo::calcArea(){
    return (parm1 * parm1) * parm2;
}