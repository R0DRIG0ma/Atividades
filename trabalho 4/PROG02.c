#include <stdio.h>

int main()
{
    int distancia;
    printf("\nDigite a distancia: ");
    scanf("%i", &distancia);

    for (int d_atual = 1; d_atual < distancia; d_atual++){
        if (d_atual % 40 == 0){
            printf("\n\nPraca de peddagio no Km %i", d_atual);
        }
        else if (d_atual % 2 == 0){
            printf("\n\nTelefones de emergencia no Km %i", d_atual);
        }
    }
}
