//function for fibonacci 
#include <stdio.h>
int fibo (int i){
    if (i==0) return (0);
    if (i==1) return (1);
    else return (fibo(i-1)+(i-2));
}
void main(){
    int i;
    printf("scegli i:");
    scanf ("%d",&i);
    int fibonacci=fibo (i);
    printf("Fi--> %d\n", fibonacci);
}
//it's wrong!! the calculations are wrong