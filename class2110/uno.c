#include <stdio.h>

int minimo (int a, int b, int c)//dichiaro una funzione 
{
    int min; //variabile appoggio per salvare l'int che mi ritornerà ala funzione
    if (a<=b)
    {
        min=a;
    }
    else
    {
        min=b;
    }
    if (min>c)
    {
        min=c;
    }
    return min;
}
void test (int x, int y) //void non torna nulla it's just a test
{
    int max;
    if (x>=y)
        max=x;
    else
        max=y;
    
    for (int i=1; i<= max; i++)
    {
        printf ("tripletta (%d, &d, &d) - minimo--> %d", x, y, i, minimo_tra_tre(x,y,i));
    }
}

void main ()
{
    int x;
    int y;
    printf ("Inserisci x:");
    scanf ("%d", &x);
    printf ("Inserisci y:");
    scanf ("%d", &y);

    test (x,y);
    return 0;
}
