#include <stdio.h>

void main ()
{
    int x;
    float somma=0;

    for (int i=0; i<3; i++)
    {
        printf("Inserisci il numero (x_%d):",i);
        scanf("%d", &x);
        somma=somma+x;
    }
    printf("La media è: %f\n", somma/3);
}