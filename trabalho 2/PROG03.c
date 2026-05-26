#include <stdio.h>

int main ()
{
    int pureza, octanagem, t_enxofre, pontos = 0;

    printf("\nIndique o indice de pureza (em %%): ");
    scanf("%i", &pureza);
    printf("\nIndique o nivel de octanagem: ");
    scanf("%i", &octanagem);
    printf("\nnIndique teor de enxofre (em ppm): ");
    scanf("%i", &t_enxofre);

    printf ("\n\n");
    if (pureza > 90) pontos += 4;
    if (octanagem > 85) pontos += 2;
    if (t_enxofre > 50) pontos += 1;

    if (pontos == 7){
        printf ("\nA classificacao obtida pelo combustivel eh grau A");}
    if (pontos == 6){
        printf ("\nA classificacao obtida pelo combustivel eh de grau B");}
    if (pontos == 4){
        printf ("\nA classificacao obtida pelo combustivel eh de grau C");}
    if (!(pontos == 7||pontos == 6||pontos == 4)){
        printf ("\nA classificacao obtida pelo combustivel eh grau D");}

    printf ("\n\n");
}
