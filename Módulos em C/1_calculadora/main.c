#include <stdio.h>
#include "calculadora.h"
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int rsSoma = soma(10, 5);
    printf("O resultado da soma é %d \n", rsSoma);

    int rsSubtracao = subtracao(10, 5);
    printf("O resultado da subtração é %d \n", rsSubtracao);

    int rsMultiplicacao = multiplicacao(10, 5);
    printf("O resultado da multiplicação é %d \n", rsMultiplicacao);

    int rsDivisao = divisao(10, 5);
    printf("O resultado da divisão é %d \n", rsDivisao);
    
    return 0;
}