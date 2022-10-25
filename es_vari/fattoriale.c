#include <stdio.h>
int main(){
    int n;
    int p=1;
    printf("Inserire n:");
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
        p=p*i;
    printf("Il fattoriale di %d è %d\n", n, p);
    return 0;
}