#include <stdio.h>

int main()
{
    int count = 10;
    int *p = &count;

    printf("Valor da var count %d \n", count);
    printf("End da memoria var count %p \n", &count);

    printf("\n");

    printf("Valor da variavel p %p \n", p);
    printf("End da memoria var p %p \n", &p);
    printf("Conteudo da var p %d \n", *p);

    return 0;
}