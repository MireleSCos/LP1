#include "SistemaGerenciaFolha.h"

SistemaGerenciaFolha::SistemaGerenciaFolha(/* args */)
{
}

SistemaGerenciaFolha::SistemaGerenciaFolha(vector <Funcionario*> fs, float orca){
    this->funcionarios = fs;
    this->orcamento = orca;
}

SistemaGerenciaFolha::~SistemaGerenciaFolha()
{

}

void SistemaGerenciaFolha::setFuncionarios(vector <Funcionario*> fs){
    this->funcionarios = fs;
}
float SistemaGerenciaFolha::calcularValorTotalFolha(){
    float folha = 0;

    for (Funcionario *fun : funcionarios) {
        folha += fun->calcularSalario();
    }

    if (folha > orcamento){
        throw OrcamentoEstouradoException();
    }else
    {
        return folha;
    }

}

float SistemaGerenciaFolha::consultarSalarioFuncionario(string nome){
    Funcionario *resultado = NULL;

    for (Funcionario *fun : funcionarios) {
        if (fun->getNome() == nome){
            resultado = fun;
        }
    }
    if (resultado == NULL){
        throw FuncionarioNaoExisteException();
    }else
    {
        return resultado->calcularSalario();
    }

}