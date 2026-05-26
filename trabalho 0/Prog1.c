
#include <stdio.h>

int main()
{
    int dias;
    float diaria, salario;

    printf ("\nQuantidade de dias trabalhados: ");
    scanf("%i", &dias);
    printf ("\nValor da diaria: ");
    scanf("%f", &diaria);

    salario = dias * diaria;
    if (salario >= 1500)
        printf ("\nSalario devido ao pedreiro por %i dias trabalhados eh de %.2f reais",
                 dias, salario);
    else
        printf ("\nSalario devido ao pedreiro por %i dias trabalhados eh de %.2f reais, alem de uma cesta basica",
                 dias, salario);
    printf ("\n");
}
