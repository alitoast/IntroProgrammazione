//sommatoria con k^n scelti da utente
#include <stdio.h>
void main()
{
    int n;
    int k;
    int sum=0;
    printf ("Inserire n:");
    scanf ("%d", &n);
    printf ("Inserire k:");
    scanf ("%d", &k);
    for (int i=1; i<=n; i++)
        {
            int p=1;
            for (int a=1; a<=i; a++)
                p=p*k;
            sum=sum+p;
        }
    printf("La sommatoria è: %d\n", sum);
}