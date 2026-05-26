#include <stdio.h>

int main ()
{
    int cabelo, barba, manicure, pedicure, cupom_d;
    float total = 0;

    printf("\nTipo de servico escolhido:\n\n0 - para nao deseja\n1 - para deseja\n");
    printf("\nCorte de Cabelo:\n");
    scanf ("%i", &cabelo);
    printf("\nBarba:\n");
    scanf ("%i", &barba);
    printf("\nManicure:\n");
    scanf ("%i", &manicure);
    printf("\nPedicure:\n");
    scanf ("%i", &pedicure);

    printf ("\nCupom de desconto de (0, 5, 10, 15): ");
    scanf ("%i", &cupom_d);


    if (cabelo) total += 30;
    if (barba) total += 40;
    if (manicure) total += 15;
    if (pedicure) total += 50;
    if (cabelo && barba && manicure && pedicure){
        total -= 15; }

    if (cupom_d != 0){
        if (cupom_d == 5||cupom_d == 10||cupom_d == 15){
            printf("\n\nO valor final de todo o servico foi de %.2f reais",
                    ((1-(cupom_d/100.0))*total));}
        else{
            printf("\n\nO valor do cupom de desconto eh invalido, dessa forma o valor final de todo o servico foi de %.2f reais",
                   total);}
    }
    else{
        printf("\n\nO valor final de todo o servico foi de %.2f reais", total);
    }
    printf("\n");
}
