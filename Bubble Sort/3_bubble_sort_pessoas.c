#include <stdio.h>
#include <locale.h>
#include <string.h>

#define QTDE_PESSOAS 5

struct pessoa
{
    char nome[20];
    int idade;
};

void getPessoas(struct pessoa pessoas[]) {
    strcpy(pessoas[0].nome, "Pessoa 01");
    pessoas[0].idade = 34;

    strcpy(pessoas[1].nome, "Pessoa 02");
    pessoas[1].idade = 44;

    strcpy(pessoas[2].nome, "Pessoa 03");
    pessoas[2].idade = 43;

    strcpy(pessoas[3].nome, "Pessoa 04");
    pessoas[3].idade = 22;

    strcpy(pessoas[4].nome, "Pessoa 05");
    pessoas[4].idade = 18;
}

void imprimePessoas(struct pessoa pessoas[]) {
    for (int i = 0; i < QTDE_PESSOAS; i++)
    {
        printf("Nome %s, Idade %d \n", pessoas[i].nome, pessoas[i].idade);
    }
}

void ordenar(struct pessoa pessoas[]) {

    for (int i = 0; i < QTDE_PESSOAS; i++)
    {
        for (int j = 0; j < QTDE_PESSOAS - 1; j++)
        {
            if (pessoas[j].idade > pessoas[j+1].idade)
            {
                struct pessoa maiorP = pessoas[j];
                struct pessoa menorP = pessoas[j+1];
                struct pessoa tempP = maiorP;

                pessoas[j] = menorP;
                pessoas[j+1] = tempP;
            }
        }             
    }
}


int main()
{
    setlocale(LC_ALL, "");
    
    struct pessoa pessoas[QTDE_PESSOAS];
    getPessoas(pessoas);

    printf("Antes da ordenação \n");
    imprimePessoas(pessoas);

    ordenar(pessoas);

    printf("Depois da ordenação \n");
    imprimePessoas(pessoas);

    return 0;
}