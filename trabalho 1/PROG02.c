#include <stdio.h>

int main ()
{
    float peso, distancia, frete;

    printf("\nPeso da carga em kg: ");
    scanf("%f", &peso);
    printf("\nDistancia a ser percorrida km: ");
    scanf("%f", &distancia);

    frete = (2.25*peso) + (3.34*distancia);
    printf("O valor do frete eh de %.2f reais", frete);
    printf("\n");
}
