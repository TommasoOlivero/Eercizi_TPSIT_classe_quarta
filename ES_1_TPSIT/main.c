#include <stdio.h>
#include <stdlib.h>

#define DIM 10


/*Inserimento ordinato

Si scriva un programma che :

 definisca un tipo di dato studente: ogni studente è caratterizzato da un nome, un cognome e una matricola

 -acquisica dati di 10 studenti e per ogni nuovo studente inserito, proceda ad un inserimento ordinato
(lo scopo dell'esercizio è nell ordinare gli studenti nel processo di inserimento degli stessi e  non
 dopo averli insertiti tutti con un algoritmo di ordinamento)

 -stampi i dati degli studenti*/

typedef struct{                //definizione struttura
    char nome[20];
    char cognome[20];
    int matricola;
}Stu;

void leggi(Stu v[], int n){            //inserimento dei dati in input

    for(int i = 0; i < n; i++){
        printf("\nSTUDENTE NUMERO %d\n", i);
        printf("Inserisci nome: ");
        scanf("%s", v[i].nome);
        printf("Inserisci cognome: ");
        scanf("%s", v[i].cognome);
        printf("Inserisci matricola: ");
        scanf("%d", &v[i].matricola);
    }

}

void stampa(Stu v[], int n){                     //stampa dei dati

    for(int i = 0; i < n; i++){
        printf("STUDENTE NUMERO %d:\n", i);

        printf("nome: %s\n", v[i].nome);

        printf("cognome: %s\n", v[i].cognome);

        printf("matricola: %d\n", v[i].matricola);

    }

}

int dimensione(int max){                                //definizione dimensione array e controllo del valore inserito
    int n;

    do{
        printf("Inserisci il numero di studenti: ");
        scanf("%d", &n);
    }while(n < 0 || n > max);

    return n;
}

int main() {
    Stu v[DIM];

    int n = dimensione(DIM);

    leggi(v, n);

    stampa(v, n);

    printf("\n");
    return 0;
}
