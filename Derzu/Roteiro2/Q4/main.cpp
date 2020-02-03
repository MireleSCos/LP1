#include <iostream>
#include "Circulo.h"
#include "Quadrado.h"
#include "Triangulo.h"
int main()
{
    Circulo c1 = Circulo("Circulo",3,3.14);
    Triangulo t1 = Triangulo("Tris",3,2);
    Quadrado q1 = Quadrado("Quatro", 4,4);
    
    cout << " Area do Circulo: " << c1.calcArea() << "\n Area do Quadrado: " << q1.calcArea() << "\n Area do Triangulo:" << t1.calcArea()<< endl;  
    return 0;
}
