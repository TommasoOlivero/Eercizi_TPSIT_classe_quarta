#include <stdio.h>
#include <stdlib.h>

#define DIM 10
/*
Definire una struttura per memorizzare i dati degli studenti di una calsse e
dei voti nelle varie discipline: Italiano, Matematica, e Informatica.
Si scriva una funzione in C che, a partire da un vettore di studenti fornito come argomento,
determina la disciplina che ha la media piu alta.

*/

typedef struct{
    int ita;
    int mate;
    int info;

}Voti;

typedef struct{
    char nome[20];
    char cognome[20];
    int matricola;
}Stu;

void leggi(Stu v[], Voti s[], int n){

    for(int i = 0; i < n; i++){
        printf("\nSTUDENTE NUMERO %d\n", i);
        printf("Inserisci nome: ");
        scanf("%s", v[i].nome);
        printf("Inserisci cognome: ");
        scanf("%s", v[i].cognome);
        printf("Inserisci matricola: ");
        scanf("%d", &v[i].matricola);
        printf("Inserisci voto di matematica: ");
        scanf("%d", &s[i].mate);
        printf("Inserisci voto di italiano: ");
        scanf("%d", &s[i].ita);
        printf("Inserisci voto di informatica: ");
        scanf("%d", &s[i].info);
    }

}

void media(Voti s[], float med[], int n){
        float somma = 0;
        int k = 0;


           for(int i = 0; i < n; i++){
            somma = somma + s[i].mate;
        }

        med[k] = somma / n;
        k++;
        somma = 0;

        for(int i = 0; i < n; i++){
            somma = somma + s[i].ita;
        }

        med[k] = somma / n;
        k++;
        somma = 0;

        for(int i = 0; i < n; i++){
            somma = somma + s[i].info;
        }

        med[k] = somma / n;
        k++;

}

void stampa(Stu v[], int med[], int n){

    for(int i = 0; i < n; i++){
        printf("STUDENTE NUMERO %d:\n", i);
        printf("%s %s - %d\n", v[i].nome, v[i].cognome, v[i].matricola);
    }

    printf("\n\nMEDIA DELLE MATERIE");
    printf("\nMatematica: %f", med[0]);
    printf("\nItaliano: %f", med[1]);
    printf("\nInformatica: %f", med[2]);

}

int dimensione(int max){
    int n;

    do{
        printf("Inserisci il numero di studenti: ");
        scanf("%d", &n);
    }while(n < 0 || n > max);

    return n;
}

int main() {
    Stu v[DIM];
    Stu s[3];
    int med[3];

    int n = dimensione(DIM);

    leggi(v, s, n);
    media(s, med, n);
    stampa(v, med, n);

    printf("\n");
    return 0;
}
