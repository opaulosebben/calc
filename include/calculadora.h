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

/*Um m�todo chamado setOperando1 que dever� receber como par�metro um valor float e n�o retorna valores
Um m�todo chamado setOperando2 que dever� receber como par�metro um valor float e n�o retorna valores
Um m�todo chamado soma que n�o recebe  e n�o retorna valores
Um m�todo chamado subtrai que n�o recebe  e n�o retorna valores
Um m�todo chamado multiplica que n�o recebe  e n�o retorna valores
Um m�todo chamado divide que n�o recebe  e n�o retorna valores
Um m�todo chamado getResultado que n�o recebe par�metros e retorna um valor float.*/
