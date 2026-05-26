#include <stdio.h>

int main()
{
    int pessoas = 0;
    float peso_p = 0, peso_t = 0;
    do {
        pessoas++;
        printf ("\nDigite o pesso da pessoa que acabou de entrar: ");
        scanf ("%f", &peso_p);

        peso_t += peso_p;
    }while (peso_t < 400);

        printf("\n\nHa %i pessoas no elevador, apresentando %.2f quilos de excesso",
                pessoas, peso_t - 400);

    printf("\n\n");
}
