#pragma once 

#include <iostream>
#include <exception>
using namespace std;

class ValorMuitoAcimaException :public exception
{
private:
    /* data */
public:
    ValorMuitoAcimaException(/* args */);
    ~ValorMuitoAcimaException();
};

