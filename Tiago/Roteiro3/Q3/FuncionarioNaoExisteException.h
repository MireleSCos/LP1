#pragma once
#include <iostream>
#include <exception>
using namespace std;
class FuncionarioNaoExisteException : public exception
{
private:
    /* data */
public:
    FuncionarioNaoExisteException(/* args */);
    ~FuncionarioNaoExisteException();
};


