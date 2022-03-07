#ifndef CALCULADORA_H
#define CALCULADORA_H


class calculadora
{
private:
    float operando1;
    float operando2;
    float resultado;

public:

    calculadora();
    calculadora(float operando1, float operando2);

    void soma();
    void subtrai();
    void multiplica();
    void divide();

    float getOperando1();
    float getOperando2();
    float getResultado();


    void setOperando1(float op1);
    void setOperando2(float op2);
};

#endif // CALCULADORA_H


