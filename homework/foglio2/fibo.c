//senza ricorsione
#include <stdio.h>
void main (){
    int f0=0;
    int f1=1;
    int f2;
    int n;
    printf("scegli n:");
    scanf("%d", &n);
    for (int i=2; i<=n; i++){
        f2=f0+f1;
        printf("%d --> %d\n", i, f2);
        f0=f1;
        f1=f2;

        
    }
}
