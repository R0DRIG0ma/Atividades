#include <stdio.h>

int main()
{
    double graos_atuais = 0, graos_t = 0;
    int casa;

    for (casa = 0; casa <64; casa++){
        if (casa == 0){
            graos_atuais = 1;
            graos_t += graos_atuais;}
        else{
            graos_atuais = graos_t*2;
            graos_t += graos_atuais;
        }
    }

    printf ("\nO numero de graos totais ate a casa %i eh de %.0f graos", casa, graos_t);
}
