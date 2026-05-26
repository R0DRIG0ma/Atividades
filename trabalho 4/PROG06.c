#include <stdio.h>

int main()
{
    int poupanca = 0;

    for (int ano = 2020; ano < 2070; ano++){
        for (int meses = 1; meses <= 12; meses++){
                poupanca +=800;
            if (poupanca >= 12000){
            printf ("\nA viagem ocoreu no mes %i do ano %i", meses, ano);
            poupanca = poupanca - 12000;
            }
        }
    }

}
