#include <stdio.h>
#include <stdlib.h>

int main() {
    char *car;                              //dichiarazione varibili puntatore
    int *num;

    num = (int *) malloc (sizeof(int));     //allocazione delle variabili
    car = (char *) malloc (sizeof(char));

    *num = 5;
    *car = 'T';                             //assegnazione di valori alle vaiarbili

    printf("%d - %d\n", num, *num);         //stampa delle variabili e del loro indirizzo
    printf("%d - %c", car, *car);

    printf("\n");
    return 0;
}
