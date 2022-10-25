//rad quadrata quando compilo aggiungere alla fine -lm sqrt(x)
#include <stdio.h>
#include <math.h> //per funzioni matematiche
double distanza (double x1, double y1, doulbe x2, double y2)
{
    //prima trovo le differenze delle coordinate quindi dichiaro le variabili per le diff e la sum che mi servirà dopo
    double diff1, diff2, sum;
    diff1= x1-x2;
    diff2= y1-y2;
    diff1= diff1*diff1:
    diff2= diff2*diff2;
    sum=diff1+diff2;
    double distanza = sqrt(sum);
    return distanza;
}

int main ()
{
    printf("Inserire coordinate (x1,y1) e (x2,y2)": );
    double x1,y1,x2,y2;
    printf ("x1:");
    scanf ("%lf", &x1);
    printf ("y1:");
    scanf ("%lf", &y1);
    printf ("x2:");
    scanf ("%lf", &x2);
    printf ("y2:");
    scanf ("%lf", &y2);

    double dist=distanza(x1,y2,x2,y2);
    printf("La distanza è: %lf", dist); //%lf è double
    
}


// l'opzione -o invoca una funzione che chiede un argomento per questo devo mettere -lm xè il mio argomento è una roba matematica