#include <stdio.h>

int main ()
{

    float valor_t;
    char metodo_p;
    int parcelas;

    printf ("\nValor total da compra: ");
    scanf ("%f",&valor_t);
    printf ("\nMetodo de pagamento:\nV - pagamento a vista \nF - a prazo\n");
    printf ("\n");
    scanf ("\n%c",&metodo_p);

    if(metodo_p == 'v' || metodo_p == 'V')
       {
        printf ("O valor final da compra eh de %.2f reais",
        (valor_t*0.90));
       }
    else if (metodo_p == 'f' || metodo_p == 'F')
    {
      printf("\nEscolha o numero de parcelas (ate 6x): ");
      scanf ("%i", &parcelas);
        if (parcelas > 6 || parcelas<0)
        {
        printf("\nNumero de parcelas indisponivel");
        }
        else
        {
        printf("\nO valor foi parcelado em %ix de %.2f reais",
           parcelas,(valor_t/parcelas));
        }
    }
    else
        printf("\nMetodo de venda invalido");
    printf("\n");
}
