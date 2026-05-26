#include <stdio.h>

int main()
{
    int q_cimento, q_cal;
    float v_cimento, v_cal, valor_p;

    printf ("\nQuantidade de sacos de cimento: ");
    scanf ("%i", &q_cimento);
    printf ("Valor de cada saco de cimento: ");
    scanf ("%f", &v_cimento);

    printf ("\nquantidade de sacos de cal: ");
    scanf ("%i", &q_cal);
    printf ("Valor de cada saco de cal: ");
    scanf ("%f", &v_cal);

    valor_p = (q_cimento*v_cimento) + (q_cal*v_cal);
    if (valor_p > 1000)
        printf ("\nValor total a ser pago eh de %.2f reais, sendo que seu frete foi de 50,00 reais",
                valor_p + 50);
    else
        printf ("\nValor total a ser pago eh de %.2f reais, sendo que seu frete foi de 100,00 reais",
                valor_p + 100);
    printf("\n");
}
