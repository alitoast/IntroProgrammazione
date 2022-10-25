#include <stdio.h>
int main (){
    int x;
    int y;
    int z;
    printf ("Inserisci x:");
    scanf ("%d", &x);
    printf ("Inserisci y:");
    scanf ("%d", &y);
    printf ("Inserisci z:");
    scanf ("%d", &z);
    if (x>y && y>z)
        printf ("Il minimo tra %d, %d, %d è: %d\n", x, y, z, z);
    if (y>x && x>z)
        printf ("Il minimo tra %d, %d, %d è: %d\n", x, y, z, z);   
    if (z>y && y>x)
        printf ("Il minimo tra %d, %d, %d è: %d\n", x, y, z, x);
    if (y>z && z>x)
        printf ("Il minimo tra %d, %d, %d è: %d\n", x, y, z, x);
    if (z>x && x>y)
        printf ("Il minimo tra %d, %d, %d è: %d\n", x, y, z, y);
    if (x>z && z>y)
        printf ("Il minimo tra %d, %d, %d è: %d\n", x, y, z, y);
    return 0;
}