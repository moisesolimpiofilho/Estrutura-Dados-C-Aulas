#include <stdio.h>

void imprimirVetor(int num[], int qtdeItens) 
{
    for (int i = 0; i < qtdeItens; i++)
    {
        printf("O numero eh: %d \n", num[i]);
    }
}

int main()
{
    int numeros[] = {6, 0, 3, 5};
    int qtdeItens = 4;

    printf("-----Antes-----\n");
    imprimirVetor(numeros, qtdeItens);

    for (int i = 0; i < qtdeItens; i++)
    {
        for (int j = 0; j < qtdeItens - 1; j++)
        {
            if (numeros[j] > numeros[j+1])
            {
                int maior = numeros[j];
                int menor = numeros[j+1];
                int temp = maior;

                numeros[j] = menor;
                numeros[j+1] = temp;
            }
        }             
    }
    printf("-----Depois-----\n");
    imprimirVetor(numeros, qtdeItens);   

    return 0;
}