#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include "bomba.h"


int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    bool primeiroAbastecimento = true;
    char finalizar = 'n';
    int codCombustivel = 0;
    int qtdeLitros = 0;
    float valorLitroGasolina = 0.0;
    float valorLitroEtanol = 0.0;
    float valorLitroDiesel = 0.0;

    printf("---Posto de combustíveis---\n");

    do {
        printf("---Bomba abastecendo---\n");

        if (primeiroAbastecimento) {
            printf("Primeiro abastecimento do dia \n");
            printf("Informe o valor do litro dos combustíveis na ordem (Gasolina, Etanol, Diesel)\n");
            scanf("%f %f %f", &valorLitroGasolina, &valorLitroEtanol, &valorLitroDiesel);
            salvarValorLitroCombustiveis(valorLitroGasolina, valorLitroEtanol, valorLitroDiesel);
            primeiroAbastecimento = false;
            system("clear");
        }

        printf("Qual o combustível? \n");
        printf("0-Gasolina\n1-Etanol\n2-Diesel\n");
        scanf("%d", &codCombustivel);

        if (codCombustivel > 2)
        {
            printf("Código inválido\n");
        } 
        else
        {
            printf("Quantos litros foram abastecidos? \n");
            scanf("%d", &qtdeLitros);              
            
            abastecer(qtdeLitros, codCombustivel);  

            printf("Deseja finalizar? (s/n) \n");       
            scanf(" %c", &finalizar); 
            system("clear");
        }                            

    } while (finalizar == 'n');    

    exibirRelatorio();

    return 0;
}