#include <stdio.h>

int main()
{
    int num = 10;
    int *numP;

    printf("Valor da variavel num %d \n", num);
    printf("End da memoria var num %p \n", &num);

    printf("\n");

    printf("Valor da variavel numP %p \n", numP);
    printf("End da memoria var numP %p \n", &numP);

    return 0;
}