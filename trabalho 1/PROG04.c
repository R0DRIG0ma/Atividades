#include <stdio.h>

int main ()
{
    float farinha_e, farinha_r;
    int q_normais, q_matafome;
    printf("\nQuantidade inicial de farinha de trigo disponível no estoque em Kg: ");
    scanf ("%f", &farinha_e);
    printf("\nQuantidade de pasteis normais ja vendidos no dia: ");
    scanf ("%i", &q_normais);
    printf("\nQuantidade de pasteis Matafome ja vendidos no dia: ");
    scanf ("%i", &q_matafome);

    farinha_r = (farinha_e-(q_normais*0.035)-(q_matafome*0.08));
    printf("\nQuantidade restante de farinha de trigo eh de %.2f Kg, sendo posssivel produzir %.0d pasteis Matafome com esta quantidade restante",
    farinha_r, (int)(farinha_r/0.08));
}
