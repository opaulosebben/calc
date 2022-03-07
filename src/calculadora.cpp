#include "calculadora.h"

calculadora::calculadora()
{
    operando1 = 0;
    operando2 = 0;
    resultado = 0;
}

calculadora::calculadora(float op1, float op2)
{
    setOperando1(op1);
    setOperando2(op2);
    resultado = 0;
}

float calculadora::getOperando1()
{
    return operando1;
}

float calculadora::getOperando2()
{
    return operando2;
}

float calculadora::getResultado()
{
    return resultado;
}

void calculadora::setOperando1(float op1)
{
    operando1 = op1;
}
void calculadora::setOperando2(float op2)
{
    operando2 = op2;
}

void calculadora::soma()
{
    resultado = getOperando1() + getOperando2();
}
void calculadora::subtrai()
{
    resultado = getOperando1() - getOperando2();
}
void calculadora::multiplica()
{
    resultado = getOperando1() * getOperando2();
}
void calculadora::divide()
{
    resultado = getOperando1() / getOperando2();
}
