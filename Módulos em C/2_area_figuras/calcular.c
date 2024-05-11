#include <stdio.h>
#include "figura.h"

void menu()
{
    int opcaoCalculo = 0;
    int base = 0;
    int altura = 0;
    printf("Escolha uma das opções para calcular\n");
    printf("1-Círculo\n2-Quadrado\n3-Triângulo\n4-Retângulo\n");
    scanf("%d", &opcaoCalculo);

    if (opcaoCalculo == 1)
    {
        float raio = 0;
        printf("Qual o raio do círculo? ");
        scanf("%f", &raio);
        float rsCirculo = calcular_circulo(raio);
        printf("A área do círculo é: %.2f \n", rsCirculo);
    }
    else if (opcaoCalculo == 2)
    {
        float lado = 0;
        printf("Qual a medida do lado do quadrado? ");
        scanf("%f", &lado);
        float rsQuadrado = calcular_quadrado(lado);
        printf("A área do quadrado é: %.2f\n", rsQuadrado);
    } 
    else if (opcaoCalculo == 3)
    {        
        printf("Qual a medida da base do triângulo? ");
        scanf("%d", &base);
        printf("Qual a medida da altura do triângulo? ");
        scanf("%d", &altura);
        float rsTriangulo = calcular_triangulo(base, altura);
        printf("A área do triângulo é: %.2f\n", rsTriangulo);
    }
    else if (opcaoCalculo == 4)
    {
        printf("Qual a medida da base do retângulo? ");
        scanf("%d", &base);
        printf("Qual a medida da altura do retângulo? ");
        scanf("%d", &altura);
        float rsRetangulo = calcular_retangulo(base, altura);
        printf("A área do retângulo é: %.2f\n", rsRetangulo);
    }
    
}

int main()
{
    printf("---Calculadora de figuras geométricas---\n");

    char opcao; // s/n

    do
    {
        menu();
        printf("Deseja continuar? (s/n) ");
        scanf(" %c", &opcao);
    } while (opcao == 's');

    printf("\n---Obrigado por utilizar nosso sistema :)---\n");
    
    return 0;
}