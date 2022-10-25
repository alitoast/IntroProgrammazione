//tripletta di numeri trova il minimo
#include <stdio.h>
#include <stdlib.h>

void error_handler(void);

int minimo (int x, int y, int z){
    int min = x;
    /*
    min = y < min ? y : min; //operatore ternario è come scrivere if ed else in riga 
    min = z < min ? z : min;
    */
    if(y<min)
        min=y;
    if(z<min)
        min=z;
    return min;
    }


int main (){
    int x;
    int y;
    int z;
    printf ("Inserisci x:");
    if(!scanf ("%d", &x)) //1 se ok, 0 errore
        error_handler(); //funzione che gestisce errori
    printf ("Inserisci y:");
    if(!scanf ("%d", &y))
        error_handler();
    printf ("Inserisci z:");
    if(!scanf ("%d", &z))
        error_handler();
    printf("Il minimo è: %d\n",minimo(x, y, z));
    return 0; //0 ergo no errori
}

void error_handler(){ //è la funzione
    printf("errore di input\n");
    exit(1); //perché fai uscire il programma con errore 
}