#include <stdio.h>

int main()
{
    int pessoas = 0, m_t = 0, f_t = 0;
    char genero;
    float altura_m, altura_ma = 0, altura_mb = 9999, altura_t_m = 0;
    float altura_f, altura_fa = 0, altura_fb = 9999, altura_t_f = 0;

    while (pessoas < 50){
        pessoas++;
        printf ("\nColoque o genero da pessoa %i (1 - Masculino / 2 - Feminino): ", pessoas);
        do {
        scanf (" %c", &genero);
        }while (genero != '1' && genero != '2');

        switch (genero){
        case '1':{
            printf("\nAdicione a altura: ");
            scanf ("%f", &altura_m);
            altura_t_m += altura_m;
            m_t++;

            if (altura_m > altura_ma){
                altura_ma = altura_m;
            }
            if (altura_m < altura_mb){
                altura_mb = altura_m;
            }
        }break;
        case '2': {
            printf("\nAdicione a altura: ");
            scanf ("%f", &altura_f);
            altura_t_f += altura_f;
            f_t++;

            if (altura_f > altura_fa){
                altura_fa = altura_f;
            }
            if (altura_f < altura_fb){
                altura_fb = altura_f;
            }
        }break;
        }
    }
    if (altura_mb == 9999){
        printf ("\n\nA media de altura masculina foi %.2f metros, sendo a maior altura %.2f metros e a menor 0 metros",
            altura_t_m / m_t, altura_ma);}
    else {
            printf ("\n\nA media de altura masculina foi %.2f metros, sendo a maior altura %.2f metros e a menor %.2f metros",
            altura_t_m / m_t, altura_ma, altura_mb);}

    if (altura_fb == 9999){
        printf ("\n\nA media de altura feminina foi %.2f metros, sendo a maior altura %.2f metros e a menor 0 metros",
            altura_t_f / f_t, altura_fa);
    }
    else {
            printf ("\n\nA media de altura feminina foi %.2f metros, sendo a maior altura %.2f metros e a menor %.2f metros",
            altura_t_f / f_t, altura_fa, altura_fb);}
    printf ("\n\n\n");
}
