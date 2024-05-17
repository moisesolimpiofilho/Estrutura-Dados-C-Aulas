#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

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
    char datas[30][20];
    float temperaturas[30];
    int indice = 0;

    // Descartamos o cabeçalho do arquivo
    fgets(linha, 100, file);

    while (fgets(linha, 100, file) != NULL)
    {
        int qtde = sscanf(linha, "%s %f", 
            data, &temperatura);
        
        if (qtde == 2) {
            strcpy(datas[indice], data);
            temperaturas[indice] = temperatura;
            indice++;
        }
    }

    // Imprimindo as informações
    for (int i = 0; i < 30; i++)
    {
        printf(
            "Data: %s, Temp: %.2f \n", 
            datas[i], temperaturas[i]
        );        
    }
    
    // Finalizar com ordenação de vetores
    
    fclose(file);
    return 0;
}