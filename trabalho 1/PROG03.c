#include <stdio.h>

int main ()
{
    float distancia_p, c_gasto, consumo_medio, distancia_r;
    printf("\nTendo em vista que no ultimo abastecimento foram colocados 50 litros de combustivel\n\nDigite a:\n");

    printf("\nDistancia ja percorrida em km: ");
    scanf ("%f", &distancia_p);
    printf("Quantidade de litros de combustivel consumido desde o ultimo abastecimento: ");
    scanf ("%f", &c_gasto);

    consumo_medio = distancia_p/c_gasto;
    distancia_r = (consumo_medio * (50-c_gasto));

    printf("\nO consumo medio de combustivel do carro eh de %.2f Km/L, sendo possivel percorrer mais %.2f Km sem precisar abastecer",
           consumo_medio, distancia_r);
    printf("\n");
}
