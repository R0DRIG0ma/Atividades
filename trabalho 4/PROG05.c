#include <stdio.h>

int main()
{
    for (int linha = 1; linha <= 10; linha++){
        for (int coluna = 0; coluna <= 10; coluna++){
            printf("\n%i X %i = %i", linha, coluna, linha*coluna);
        }
    }
    return 1;
}
