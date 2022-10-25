#include <stdio.h>
void main ()
//quando x è neg print it and tell me what is it's val ass
{
    int x;
    printf ("Inserisci x:");
    scanf ("%d", &x);

    if (x<=0){
        printf("%d è negativo\n", x);
        printf("Il suo valore assoluto è: %d\n", -x);
        }
    else{
        printf ("%d è positivo\n",x);
        }
}