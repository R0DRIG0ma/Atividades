#include <stdio.h>

int main ()
{
    char genero, pernoite, a_furto;
    int fabricacao, pontos_c, desconto = 0;
    float valor_t;

    printf("\nSexo do condutor principal do veiculo (F - mulher / H - homem): "); scanf ("%c", &genero);
    printf("\nNumero de pontos na carteira de habilitacao: "); scanf ("%i", &pontos_c);
    printf("\nAno de fabricacao do veiculo: "); scanf ("%i", &fabricacao);
    printf("\nVeiculo possui local seguro para pernoite (S - sim / N - nao) ? "); scanf (" %c", &pernoite);
    printf("\nVeiculo possui dispositivo anti-furto (S - sim / N - nao) ? "); scanf (" %c", &a_furto);

    if (genero == 'F'|| genero == 'f') desconto += 10;
    if (pontos_c == 0) desconto += 5;
        else if (pontos_c > 0 && pontos_c <= 7) desconto += 4;
        else if (pontos_c > 7 && pontos_c <= 12) desconto += 3;
        else if (pontos_c > 12 && pontos_c <= 17) desconto += 2;
        else if (pontos_c > 17) desconto += 0;
    if (fabricacao > 2019) desconto += 2;
    if (pernoite == 'S'|| pernoite == 's') desconto += 2;
    if (a_furto == 'S'|| a_furto == 's') desconto += 1;

    printf("\n\nO desconto total foi de %i%%, agora digite o valor bruto da apolice (sem o desconto): ", desconto);
    scanf ("%f", &valor_t);

    printf ("\n\nO valor da apolice apos a aplicar os %i%% de desconto eh de %.2f reais",
             desconto, (1-(desconto/100.0))* valor_t);
    printf("\n\n");
}
