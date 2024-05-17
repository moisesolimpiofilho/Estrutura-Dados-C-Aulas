#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
    FILE *file = fopen("datalog.txt", "r");

    if (file == NULL)
    {
        perror("Erro");
        return 0;
    }

    char linha[100];
    char data[20];
    float temperatura;

    fgets(linha, 100, file);

    while (fgets(linha, 100, file) != NULL)
    {
        int qtde = sscanf(linha, "%s %f", 
            data, &temperatura);
        
        if (qtde == 2) {
            printf("Data: %s, Temp: %.2f \n", 
                    data, temperatura);
        }
    }
    fclose(file);
    return 0;
}