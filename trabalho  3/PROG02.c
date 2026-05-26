#include <stdio.h>

int main()
{
    int pessoas_t, idade, pessoas = 0;
    float idade_t = 0;
    int otimo = 0, bom = 0, regular = 0, ruim = 0, pessimo = 0;
    char nota_p;

    printf ("\nNumero de pessoas na sessao (ate 100 pessoas): ");
    scanf ("%i", &pessoas_t);
    do {
    printf("\nIndique sua idade: ");
        do {
            scanf("%i", &idade);
        }while(idade < 0);
    idade_t += idade;
    printf ("\nIndique a nota do filme:\n5 - otimo\n4 - bom\n3 - regular\n2 - ruim\n1 - pessimo\n\n");
        do{
            scanf(" %c", &nota_p);
        }while (nota_p < '0' || nota_p > '5');
    if (nota_p == '5') otimo = otimo +1;
    else if (nota_p == '4') bom = bom +1;
    else if (nota_p == '3') regular = regular +1;
    else if (nota_p == '2') ruim = ruim +1;
    else if (nota_p == '1') pessimo = pessimo +1;
    pessoas++;
    }while (pessoas != pessoas_t);

    printf("\n\nEntre as %i, a media das idades de quem assistiu foi de %.0f anos e as notas do filme foram:\nOtimo - %i votos\nBom - %i votos\nRegular - %i votos\nRuim - %i votos\nPessimo - %i votos\n\n\n",
           pessoas_t, idade_t/pessoas_t, otimo, bom, regular, ruim, pessimo);
}
