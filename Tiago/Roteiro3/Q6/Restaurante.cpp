#include "Restaurante.h"

Restaurante::Restaurante(){
}
Restaurante::Restaurante(int n){
    num = n;
}
void Restaurante::adicionaMesa(Mesa m){
    this->mesas[m.num] = m;
}