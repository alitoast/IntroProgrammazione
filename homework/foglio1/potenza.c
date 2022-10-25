//POTENZA a,b>0 da inserire tc sia a^b 
#include <stdio.h>
void main ()
{
    int a;
    int b;
    int p=1;
    //chiedo inserimento parametri per base ed esponente
    printf("Inserire valore di a: ");
    scanf ("%d", &a);
    printf("Inserire valore di b: ");
    scanf ("%d", &b);
    
    for (int i=1; i<=b; i++)//ciclo per potenza
        {
            p=p*a;
        }
    printf("La potenza di %d alla %d è: %d\n", a, b, p);
}
