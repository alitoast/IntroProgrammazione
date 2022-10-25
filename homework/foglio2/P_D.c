//valore pos o neg, pari o dispari
#include <stdio.h>
void main()
{
    int a, b;
    printf ("Scegli a: ");
    scanf ("%d",&a);
    printf ("Scegli b: ");
    scanf ("%d",&b);
    if (b>0)
        printf("%d è positivo\n", b);
    else
        printf("%d è negativo\n", b);

    if (a%2==0)
        printf("Il valore %d è pari\n",a);
    else
        printf("Il valore %d è dispari\n",a);

    printf ("La somma tra %d e %d è: %d\n", a, b, a+b);

    if (a>=0 && b>=0)
        printf ("(+a)+(+b)=%d porta al max risultato\n", a+b);
    else if (a<0 && b>=0)
        printf ("(-a)+(+b)=%d porta al max risultato\n", -a+b);
    else if (a>=0 && b<0)
        printf ("(+a)+(-b)=%d porta al max risultato\n", a-b);
    else
        printf ("(-a)+(-b)=%d porta al max risultato\n", -a-b);
}