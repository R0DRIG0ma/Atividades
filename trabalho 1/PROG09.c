#include <stdio.h>

int main ()
{
    int pontos = 0, p_familia, p_escolar;
    float renda_p;
    char genero_c, p_doente;

    printf("\nNumero de pessoas na familia: "); scanf ("%i", &p_familia);
    printf("\nNumero de pessoas em idade escolar: "); scanf ("%i", &p_escolar);
    printf("\nRenda per capita: "); scanf ("%f", &renda_p);
    printf("\nA familia eh chefiada por (M - mulher / H - homem): "); scanf (" %c", &genero_c);
    printf("\nAlgum membro da familia apresenta doenca grave incuravel (S - sim / N - nao): "); scanf ("\n%c", &p_doente);

    pontos += (p_familia);
    pontos += (p_escolar * 2);
    if (renda_p < 810.50) pontos += 10;
        else if(renda_p >= 810.50 && renda_p <= 1621) pontos += 5;
        else if(renda_p > 1621) pontos += 3;
    if (genero_c == 'M'||genero_c == 'm') pontos += 10;
        else pontos += 5;
    if (p_doente == 'S'||p_doente == 's') pontos += 5;

if (pontos >= 25){
        printf("\n\n\nEssa familia ira receber a casa em 2026");}
    else if (pontos >= 15 && pontos <= 24){
        printf("\n\n\nEssa familia ira receber a casa em 2027");}
    else if (pontos >= 10 && pontos <=14){
        printf("\n\n\nEssa familia ira receber a casa em 2028");}
    else{
        printf("\n\n\nEssa familia ira receber a casa em 2029");}

    printf("\n\n\n\n");
}
