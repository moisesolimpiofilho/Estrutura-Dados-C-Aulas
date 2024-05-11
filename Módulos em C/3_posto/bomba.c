#include "bomba.h"
#include <stdio.h>

char COMBUSTIVEIS[3][20] = {{"Gasolina"}, {"Etanol"}, {"Diesel"}};

float VALOR_LITRO_COMBUSTIVEL[3] = {0.0, 0.0, 0.0};

int QTDE_ABASTECIMENTOS[3] = {0, 0, 0};

float TOTAL_ABASTECIMENTOS[3] = {0.0, 0.0, 0.0};

void salvarValorLitroCombustiveis(float valorGasolina, float valorEtanol, 
                                  float valorDiesel)
{
    VALOR_LITRO_COMBUSTIVEL[0] = valorGasolina;
    VALOR_LITRO_COMBUSTIVEL[1] = valorEtanol;
    VALOR_LITRO_COMBUSTIVEL[2] = valorDiesel;
}

void abastecer(int qtdeLitros, int codCombustivel)
{    
    float valorDesconto = calcularDesconto(qtdeLitros, codCombustivel);
    float valorTotal = (qtdeLitros * VALOR_LITRO_COMBUSTIVEL[codCombustivel]) - valorDesconto;

    QTDE_ABASTECIMENTOS[codCombustivel]++;
    TOTAL_ABASTECIMENTOS[codCombustivel] += valorTotal;

    printf(
        "O total abastecido com combustível %s foi R$ %.2f com desconto de R$ %.2f \n",
        COMBUSTIVEIS[codCombustivel], valorTotal, valorDesconto);
}

float calcularDesconto(int qtdeLitros, int codCombustivel)
{
    float desconto = 0.0;

    if (codCombustivel == 0)
    {
        if (qtdeLitros >= 20 && qtdeLitros <= 30) desconto = 0.05;
        else if (qtdeLitros > 30) desconto = 0.10;
    }
    else if (codCombustivel == 1)
    {
        if (qtdeLitros >= 15 && qtdeLitros <= 25) desconto = 0.04;
        else if (qtdeLitros > 25) desconto = 0.09;
    }
    else if (codCombustivel == 2)
    {
        if (qtdeLitros >= 20 && qtdeLitros <= 40) desconto = 0.07;
        else if (qtdeLitros > 40) desconto = 0.13;
    }
    return qtdeLitros * desconto;
}

void exibirRelatorio()
{
    printf("---Relatório dos abastecimentos---\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Para o combustível %s\n", COMBUSTIVEIS[i]);
        printf("Foram realizados %d abastecimentos\n", QTDE_ABASTECIMENTOS[i]);
        printf("Totalizando R$ %.2f \n", TOTAL_ABASTECIMENTOS[i]);
        printf(
            "Média de R$ %.2f por abastecimento \n\n",
            QTDE_ABASTECIMENTOS[i] > 0 ? TOTAL_ABASTECIMENTOS[i] / QTDE_ABASTECIMENTOS[i] : 0);
    }
}
