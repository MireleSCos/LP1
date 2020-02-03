#include "Triangulo.h"
#include "string"

using namespace std;

Triangulo::Triangulo(/* args */): FigurasGeometricas()
{
}
Triangulo::Triangulo(string n,float parm1, float parm2): FigurasGeometricas(n,parm1,parm2)
{

}

Triangulo::~Triangulo()
{
}
float Triangulo::calcArea(){
    return (parm1 * parm2)/2;
}
