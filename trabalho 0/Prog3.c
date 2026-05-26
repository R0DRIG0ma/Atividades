#include <stdio.h>

int main()
{
    int d_fundacao, d_parede, d_laje, d_telhado, d_acabamento, d_pintura, d_total;

    printf ("\nQuantidade de dias previsto para fazer a fundacao da casa: ");
    scanf ("%i", &d_fundacao);

    printf ("\nQuantidade de dias previsto para levantar a parede: ");
    scanf ("%i", &d_parede);

    printf ("\nQuantidade de dias previsto para levantar a laje: ");
    scanf ("%i", &d_laje);

    printf ("\nQuantidade de dias previsto para levantar a telhado: ");
    scanf ("%i", &d_telhado);

    printf ("\nQuantidade de dias previsto para fazer o acabamento: ");
    scanf ("%i", &d_acabamento);

    printf ("\nQuantidade de dias previsto para fazer a pintura: ");
    scanf ("%i", &d_pintura);

    d_total = d_fundacao + d_parede + d_laje+ d_telhado + d_acabamento + d_pintura;
    printf("\n");
    if (d_total <= 120)
        printf("\nO pedreiro vai entregar a tempo, com %i dias de antecedencia", 120 - d_total);
    else
        printf("\nO pedreiro nao vai entregar a tempo, pois ficara com %i dias de atraso", d_total - 120);
    printf("\n");
}
