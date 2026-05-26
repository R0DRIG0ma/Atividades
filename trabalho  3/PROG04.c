#include <stdio.h>

int main()
{
    char opcao;
    int lasanha_b = 0, escondidinho_sc = 0, risoto_aLs = 0, quiche_e = 0;
    do{
    printf("\nQual voce deseja que seja o prato principal do almoço no restaurante da empresa para amanha:\n1. Lasanha de Berinjela\n2. Escondidinho de Shimeji com Mandioquinha.\n3. Risoto de Abobrinha com Limão Siciliano.\n4. Quiche de Espinafre.\n5. Quantos votos cada prato recebeu até o momento.\n0. Sair\n\n");
    scanf(" %c", &opcao);

    if (opcao == '1') lasanha_b = lasanha_b +1;
    else if (opcao == '2') escondidinho_sc = escondidinho_sc +1;
    else if (opcao == '3') risoto_aLs = risoto_aLs +1;
    else if (opcao == '4') quiche_e = quiche_e +1;
    else if (opcao == '5') {
        printf("\n\n\nA disposicao de votos ate o momento eh:\nLasanha de Berinjela - %i votos\nEscondidinho de Shimeji com Mandioquinha - %i votos\nRisoto de Abobrinha com Limão Siciliano - %i votos\nQuiche de Espinafre - %i votos\n\n",
               lasanha_b, escondidinho_sc, risoto_aLs, quiche_e);
        printf("<pressione enter para retornar ao menu>\n\n\n");
        getchar();
        getchar();}

    }while (opcao != '0');
    printf("\n\n");
}
