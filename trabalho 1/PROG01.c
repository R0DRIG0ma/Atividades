#include <stdio.h>

int main ()
{
    int q_mudas, mudas_m, meses;

    printf ("\nQuantidade de mudas que foram doadas: ");
    scanf ("%i", &q_mudas);
    printf ("\nNumero de mudas que serao mensalmente plantas: ");
    scanf ("%i", &mudas_m);

    meses = (int)(q_mudas/mudas_m);
    if (q_mudas > (meses*mudas_m))
        {
         printf ("\nLevara %i meses para terminar o plantio das %i mudas",
          meses+1, q_mudas);
        }
    else
         printf ("\nLevara %i meses para terminar o plantio das %i mudas",
          meses, q_mudas);
}
