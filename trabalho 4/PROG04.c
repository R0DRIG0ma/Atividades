#include <stdio.h>

int main()
{   int q_numeros, valor, m_valor, v_iguais = 1;

    printf("\ndigite um valor inteiro: ");
    scanf("%i", &m_valor);

    for (int q_numeros = 1; q_numeros < 20; q_numeros++){
        printf("\ndigite um valor inteiro: ");
        scanf("%i", &valor);

        if (valor == m_valor) v_iguais++;
        else if (valor > m_valor){
            m_valor = valor;
            v_iguais = 1;
        }
    }
    printf ("\n\nO maior numero incerido foi o numero %i, e ele apareceu %i vezes\n\n",
            m_valor, v_iguais);
}
