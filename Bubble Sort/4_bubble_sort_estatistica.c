#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

struct dados {
    char data[20];
    float temperatura;
};

void ordernar(struct dados vDados[]) {

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 30 - 1; j++)
        {
            if (vDados[j].temperatura > vDados[j+1].temperatura)
            {
                struct dados maiorTemp = vDados[j];
                struct dados menorTemp = vDados[j+1];
                struct dados temp = maiorTemp;

                vDados[j] = menorTemp;
                vDados[j+1] = temp;
            }
        }             
    }
}

void imprimir(struct dados vDados[]) {
    for (int i = 0; i < 30; i++)
    {
        printf(
            "Data: %s, Temp: %.2f \n", 
            vDados[i].data, vDados[i].temperatura
        );        
    }
}

int main()
{
    FILE *file = fopen("datalog.txt", "r");

    if (file == NULL)
    {
        perror("Erro");
        return 0;
    }

    // Variaveis para leitura do arquivo
    char linha[100];
    char data[20];
    float temperatura;

    // Variaveis usada nos vetores
    struct dados vDados[30];
    int indice = 0;

    // Descartamos o cabeçalho do arquivo
    fgets(linha, 100, file);

    while (fgets(linha, 100, file) != NULL)
    {
        int qtde = sscanf(linha, "%s %f", 
            data, &temperatura);
        
        if (qtde == 2) {
            strcpy(vDados[indice].data, data);
            vDados[indice].temperatura = temperatura;
            indice++;
        }
    }

    fclose(file);

    // Imprimindo as informações
    printf("---Antes---\n");
    imprimir(vDados);
    
    // Finalizar com ordenação de vetores
    ordernar(vDados);

    printf("---Depois---\n");
    imprimir(vDados);

    printf("A menor temperatura é %.2f \n", vDados[0].temperatura);
    printf("A maior temperatura é %.2f \n", vDados[29].temperatura);
    
    return 0;
}