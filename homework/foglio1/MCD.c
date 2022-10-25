#include <stdio.h>
void main()
//MCD
{//variabili x,y scelte da utente
    int x;
    int y;
    printf ("Inserisci x:");
    scanf ("%d", &x);
    printf ("Inserisci y:");
    scanf ("%d", &y);
    while (x!=y)
        {
            if (x>y)
                x=x-y;
            else
                y=y-x;
        }
    printf ("MCD cercato è: %d\n", y);
}