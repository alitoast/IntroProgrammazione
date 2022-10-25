#include <stdio.h>
void main ()
// quadrati perfetti da a inserito ad 1

{
    //dichiaro a da inserire, p potenza
    int a;
    int p;
    printf ("Inserire a:");
    scanf ("%d", &a);
    for (int i=1; i<=a; i++)
        {
            p=i*i;
            printf ("Il quadrato di %d è: %d\n", i, p);
        }
}