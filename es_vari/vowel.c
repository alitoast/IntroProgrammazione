#include <stdio.h>
void main ()

//program to tell me if it's vowel or not
{
    char c;
    int vowel;
    printf ("Inserire input:");
    scanf ("%c", &c);
    //dichiaro cos'è vocale
    vowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    if (vowel)
        printf("L'input è vocale\n");
    else
        printf("L'input non è volcale\n");
}