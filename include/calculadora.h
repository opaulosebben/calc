#ifndef CALCULADORA_H
#define CALCULADORA_H


class calculadora
{
    private:
        int operando1;
        int operando2;



    public:

        void soma(int);
        void subtrai (int);
        void multiplica (int);
        void divide (int);

        float setOperando1(float);
        float setOperando2(float);

        float getResultado();
};

#endif // CALCULADORA_H

/*Um método chamado setOperando1 que deverá receber como parâmetro um valor float e não retorna valores
Um método chamado setOperando2 que deverá receber como parâmetro um valor float e não retorna valores
Um método chamado soma que não recebe  e não retorna valores
Um método chamado subtrai que não recebe  e não retorna valores
Um método chamado multiplica que não recebe  e não retorna valores
Um método chamado divide que não recebe  e não retorna valores
Um método chamado getResultado que não recebe parâmetros e retorna um valor float.*/
