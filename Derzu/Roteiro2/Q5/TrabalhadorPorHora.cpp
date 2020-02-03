#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(/* args */): Trabalhador()
{
}
TrabalhadorPorHora::TrabalhadorPorHora(string n, float v): Trabalhador(n,0)
{
    valorHora = v;
}
TrabalhadorPorHora::~TrabalhadorPorHora()
{
}
float TrabalhadorPorHora::calcularPagamentoSemanal(int horasSemanais){
    

    if (horasSemanais <= 40 && horasSemanais > 0 ){

        salario = (horasSemanais * valorHora) * 4;
        return horasSemanais * valorHora;

    }else if ( horasSemanais > 0 && horasSemanais > 40){

        horasSemanais = horasSemanais - 40;
        float extra = (horasSemanais * 1.5) * valorHora;

        salario = ((40 * valorHora) + extra) * 4;
        return (40 * valorHora) + extra ;

    }
    
}