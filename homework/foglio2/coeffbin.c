//coefficente binomiale
#include <stdio.h>
int main (){
    int n, k;
    printf ("Inserire n:");
    scanf ("%d", &n);
    printf ("Inserire k:");
    scanf ("%d", &k);
    int c_b=1;
    if (n>=k){
        int f_n=1;
        int f_k=1;
        int f_nk=1;
        
        for (int i=1; i<=n; i++){
            if (i<=k)
                f_k*=i;
            if (i<=(n-k))
                f_nk*=i;
            f_n*=i;
        }
        c_b=f_n/(f_k*f_nk);
    }
    printf ("Il coefficente binomiale di %d su %d è: %d.\n", n, k, c_b);
    return 0;
}
