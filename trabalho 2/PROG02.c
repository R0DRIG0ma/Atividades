#include <stdio.h>

int main ()
{
    int codigo;
    //Codigos de 1 ate 14
    printf("\nDigite o codigo do produto: ");
    scanf(" %i", &codigo);

    printf("\n");
    switch (codigo)
    {
    case 1:
    case 2: {printf("\nProduto Alimenticio");} break;

    case 3:
    case 4:
    case 5: {printf("\nProduto de Limpeza");} break;

    case 6: {printf("\nProduto Eletronico");} break;

    case 7:
    case 8: {printf("\nProduto Eletronico");} break;

    case 9:
    case 10:
    case 11:
    case 12: {printf("\nProduto de Higiene Pessoal");} break;

    case 13:
    case 14: {printf("\nProduto Hospitalar");} break;

    default: {printf("\nCodigo invalido");}
    }

    printf("\n\n");
}
