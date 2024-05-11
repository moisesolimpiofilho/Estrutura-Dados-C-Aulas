#include "figura.h"
#include <math.h>

float calcular_circulo(float raio)
{
    return M_PI * pow(raio, 2);
}

float calcular_quadrado(float lado)
{
    return lado * lado;
}

float calcular_triangulo(int base, int altura)
{
    return (base * altura) / 2;
}

float calcular_retangulo(int base, int altura)
{
    return base * altura;
}