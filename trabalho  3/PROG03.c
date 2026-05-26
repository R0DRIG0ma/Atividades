#include <stdio.h>

int main()
{
    char voto_p;
    int chapa_1 = 0, chapa_2 = 0, chapa_3 = 0, branco = 0, nulo = 0, v_validos = 0;

    for (int pessoas = 0; pessoas < 200; pessoas++){
        printf("\nQual foi o voto da pessoa %i:\n1 - Chapa 1\n2 - Chapa 2\n3 - Chapa 3\n0 - voto em branco\nOutra - voto nulo\n\n", pessoas +1);
        scanf(" %c", &voto_p);
        if (voto_p == '1') {chapa_1 = chapa_1 +1; v_validos++;}
        else if (voto_p == '2') {chapa_2 = chapa_2 +1; v_validos++;}
        else if (voto_p == '3') {chapa_3 = chapa_3 +1; v_validos++;}
        else if (voto_p == '0') branco = branco +1;
        else nulo = nulo +1;
    }
    printf("\nO numero de votos foram:\nChapa 1 - %i\nChapa 2 - %i\nChapa 3 - %i\nVoto em branco - %i\nVoto nulo - %i\n",
           chapa_1, chapa_2, chapa_3, branco, nulo);
    if (chapa_1 > (v_validos/2)){
        printf("\nA chapa 1 foi vencedora com mais de 50%% dos votos");
    }else if (chapa_2 > (v_validos/2)){
        printf("\nA chapa 2 foi vencedora com mais de 50%% dos votos");
    }else if (chapa_3 > (v_validos/2)){
        printf("\nA chapa 3 foi vencedora com mais de 50%% dos votos");
    }else{
    printf("\nSera nessario um segundo turno");}
    printf("\n\n\n");
}

