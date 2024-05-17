#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *notas;
    notas = malloc(5 * sizeof(int));

    printf("--Cadastro de notas--\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Digite uma nota: ");
        scanf("%d", &notas[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("A nota eh: %d \n", notas[i]);
    }

    free(notas);
    
    return 0;
}