#include <stdio.h>
#include <stdlib.h>

int main()
{
    int adicionarNotas = 0;
    int *notas;
    notas = malloc(5*sizeof(int));

    printf("--Cadastro de notas--\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Digite a nota: ");
        scanf("%d", &notas[i]);
    }
    
    printf("Quantas notas deseja adicionar? ");
    scanf("%d", &adicionarNotas);

    // realoca o ponteiro
    int soma = 5 + adicionarNotas;
    notas = realloc(notas, soma * sizeof(int));

    // preenchendo o restante
    for (int i = 5; i < soma; i++)
    {
        printf("Digite a nota: ");
        scanf("%d", &notas[i]);
    }

    // imprimir as notas
    for (int i = 0; i < soma; i++)
    {
        printf("A nota eh: %d \n", notas[i]);
    }

    free(notas);
    
    return 0;
}