#ifndef BOMBA_H
#define BOMBA_H

void salvarValorLitroCombustiveis(float valorGasolina, float valorEtanol, float valorDiesel);

void abastecer(int qtdeLitros, int codCombustivel);

float calcularDesconto(int qtdeLitros, int codCombustivel);

void exibirRelatorio();


#endif