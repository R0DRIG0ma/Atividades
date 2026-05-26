    #include <stdio.h>

int main()
{
    float t_pedreiro, dias_a1, dias_a2;
    printf ("\nValor recebido pelo pedreiro: ");
    scanf ("%f", &t_pedreiro);

    printf ("\nDias trabalhados pelo auxiliar 1: ");
    scanf ("%i", &dias_a1);

    printf ("\nDias trabalhados pelo auxiliar 2: ");
    scanf ("%i", &dias_a2);

    printf("\nO pedreiro ira ficar com %.2f reais", t_pedreiro*0.7);

    if (dias_a1 > dias_a2)
        {
        printf("\nO auxiliar 1 trabalhou mais dias, logo ira receber %.2f reais", t_pedreiro*0.18);
        printf("\nO auxiliar 2 ira receber %.2f reais", t_pedreiro*0.12);
        }
    else
        {
        printf("\nO auxiliar 2 trabalhou mais dias, logo ira receber %.2f reais", t_pedreiro*0.18);
        printf("\nO auxiliar 1 ira receber %.2f reais", t_pedreiro*0.12);
        }
    printf("\n");

}
