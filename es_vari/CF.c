//tabella che mi stampi corrispondenza tra farhenheit e celsius
//F da 0 a 300, incremento di 20
//C=5\9*(F-32)
#include <stdio.h>
void main(){
    float cels;
    int fahr;
    int top= 300;

    for(fahr=0; fahr<=top; fahr+=20){
        printf("%d °F\t", fahr);
        cels=5.0/9.0*((float)fahr-32.0);
        printf("%f °C\n", cels);
    }
    printf("Good job Ali\n");

}