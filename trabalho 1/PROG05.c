#include <stdio.h>

int main ()
{
    int bebida;
    float pagamento;

    printf("\nEscolha sua bebida:\n1 - Refrigerante em lata - 3,00 reais\n2 - Suco - 2,50 reais\n");
    printf("\nNumero da bebida - ");
    scanf ("%i", &bebida);
    printf("\nValor inserido: ");
    scanf ("%f", &pagamento);

    if(bebida == 1)
       {
        if (pagamento < 3)
        {
        printf("\nDinheiro insulficiente");
        }
        else
        {
        printf("\nBebida escolhida = refrigerante\nSeu troco sera %.2f reais",
           (pagamento-3));
        }
       }
    else if (bebida == 2)
    {
        if (pagamento < 2.5)
        {
        printf("\nDinheiro insulficiente");
        }
        else
        {
        printf("\nBebida escolhida = suco\nSeu troco sera %.2f reais",
           (pagamento-2.5));
        }
    }
    else
        printf("\nNumero da bebida invalido");
    printf("\n");
}
