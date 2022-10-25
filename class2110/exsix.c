//ricorsione tipo fibonacci quindi caso base e poi riconduci tutto al cas base
//siamo messi malissimo dio bon
//l'idea è dichiarare la funzione, scrivere quello che deve fare poi il corpo del rest che cos'è? sono calcoli che deve fare e poi richiamare la funzione?
//parto dal caso base e poi ricorsivo al caso base

#include <stdio.h>

double a_n(int n){
    double a_i=0.5;
    printf("a_1=%f\n", a_i);
    for (int i=2; i<=n; i++){
        a_i= (a_i+1)/2;
        printf("a_%d=%f\n", i, a_i);
    }
    return a_i;
}

int main (){
    int n;
    printf("dammi n:");
    scanf ("%d", &n);
    a_n(n);
    return 0;
}


//non ho capito la struttura del codice, cosa va prima cosa va dopo e cosa rimanda a cosa