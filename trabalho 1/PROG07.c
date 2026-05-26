#include <stdio.h>

int main ()
{
    //tipo de veículo
    int t_veiculo;
    //tipo de lavagem, tipo de servico (leva e traz)
    char t_lavagem, servico;

    printf ("\nSelecione o tipo de veiculo:\n1 - Motocicleta\n2 - carro\n3 - Caminhonete\n\n");
    scanf("%i", &t_veiculo);
    printf("\nInforme o tipo de lavagem:\nS - Simples\nC - Completa\n\n");
    scanf(" %c", &t_lavagem);
    printf ("\nO cliente deseja utilizar o servico leva e traz?\nS - Sim\nN - Nao\n\n");
    fflush(stdin);
    scanf ("%c", &servico);

    switch(t_veiculo)
{
    case 1:
    {
        if (t_lavagem == 's'|| t_lavagem == 'S')
        {
            if (servico == 's' ||servico == 'S')
            {
                printf("\nValor final do atendimento sera 25.00 reais"); //5+20
            }
            else
            {
                printf("\nValor final do atendimento sera 5.00 reais"); //5
            }
        }
        else if (t_lavagem == 'c'|| t_lavagem == 'C')
        {
            if (servico == 's' ||servico == 'S')
            {
                printf("\nValor final do atendimento sera 30.00 reais"); //10+20
            }
            else
            {
                printf("\nValor final do atendimento sera 10.00 reais"); //10
            }
        }
        else
        {
            printf ("\nTipo de lavagem invalido\n");
        }
    }break;
    case 2:
    {
        if (t_lavagem == 's'|| t_lavagem == 'S')
        {
            if (servico == 's' ||servico == 'S')
            {
                printf("\nValor final do atendimento sera 35.00 reais"); //15+20
            }
            else
            {
                printf("\nValor final do atendimento sera 15.00 reais"); //15
            }
        }
        else if (t_lavagem == 'c'|| t_lavagem == 'C')
        {
            if (servico == 's' ||servico == 'S')
            {
                printf("\nValor final do atendimento sera 45.00 reais"); //25+20
            }
            else
            {
                printf("\nValor final do atendimento sera 25.00 reais"); //25
            }
        }
        else
        {
            printf ("\nTipo de lavagem invalido\n");
        }
    }break;
    case 3:
    {
        if (t_lavagem == 's'|| t_lavagem == 'S')
        {
            if (servico == 's' ||servico == 'S')
            {
                printf("\nValor final do atendimento sera 55 reais"); //35+20
            }
            else
            {
                printf("\nValor final do atendimento sera 35.00 reais"); //35
            }
        }
        else if (t_lavagem == 'c'|| t_lavagem == 'C')
        {
            if (servico == 's' ||servico == 'S')
            {
                printf("\nValor final do atendimento sera 70.00 reais"); //50+20
            }
            else
            {
                printf("\nValor final do atendimento sera 50.00 reais"); //50
            }
        }
        else
        {
            printf ("\nTipo de lavagem invalido\n");
        }
    }break;
        default : printf ("\nVeiculo invalido\n");
}
    printf("\n");
}
