#include <stdio.h>

int main ()
{
    char acidez, aroma;

    printf("\nSelecione o nivel de acidez do vinho (A - alta / B - baixo): ");
    scanf(" %c", &acidez);

    printf("\nDefina o aroma:\nF - Frutado\nS - Floral\nA - Amadeirado\nX - outro aroma\n\n");
    scanf(" %c", &aroma);

    if (acidez == 'B'||acidez == 'b' && (aroma == 'f'||aroma == 'F'||aroma == 's'||aroma == 'S'||aroma == 'a'||aroma == 'A')){
        printf("\n\nO vinho foi aprovado\n\n\n");}
    else{
        printf("\nO vinho foi reprovado\n\n\n");}

}
