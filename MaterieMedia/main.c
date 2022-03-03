#include <stdio.h>
#include <stdlib.h>

#define DIM 10
/*
Definire una struttura per memorizzare i dati degli studenti di una calsse e
dei voti nelle varie discipline: Italiano, Matematica, e Informatica.
Si scriva una funzione in C che, a partire da un vettore di studenti fornito come argomento,
determina la disciplina che ha la media piu alta.

*/

typedef struct {            //definizione struttura Studente
    char nome[20];
    char cognome[20];
    float ita;
    float mate;
    float info;
} Stu;

void leggi(Stu v[], int n) {                //lettura dei dati in input

    for(int i = 0; i < n; i++) {
        printf("\nSTUDENTE NUMERO %d\n", i);
        printf("Inserisci nome: ");
        scanf("%s", v[i].nome);
        printf("Inserisci cognome: ");
        scanf("%s", v[i].cognome);
        printf("Inserisci voto di matematica: ");
        scanf("%f", &v[i].mate);
        printf("Inserisci voto di italiano: ");
        scanf("%f", &v[i].ita);
        printf("Inserisci voto di informatica: ");
        scanf("%f", &v[i].info);
    }

}

void media(Stu s[], float med[], int n) {       //funzione calcola media delle materie
    float somma = 0;
    int k = 0;


    for(int i = 0; i < n; i++) {
        somma = somma + s[i].mate;
    }

    med[k] = somma / n;
    k++;
    somma = 0;

    for(int i = 0; i < n; i++) {
        somma = somma + s[i].ita;
    }

    med[k] = somma / n;
    k++;
    somma = 0;

    for(int i = 0; i < n; i++) {
        somma = somma + s[i].info;
    }

    med[k] = somma / n;
    k++;
}

void stampa(float med[]) {          //Stampare le varie medie per materia

    printf("\n\nDISCIPLINA CON LA MEDIA MAGGIORE");
    if(med[0] > med[1] && med[0] > med[2]) {
        printf("\nMatematica: %.2f", med[0]);
    } else {
        if(med[1] > med[2]) {
            printf("\nItaliano: %.2f", med[1]);
        } else {
            printf("\nInformatica: %.2f", med[2]);
        }

    }



}

int dimensione(int max) {       //definizione e controllo valore inserito per la dimensione
    int n;

    do {
        printf("Inserisci il numero di studenti: ");
        scanf("%d", &n);
    } while(n < 0 || n > max);

    return n;
}

int main() {
    Stu v[DIM];
    float med[3];

    int n = dimensione(DIM);

    leggi(v, n);
    media(v, med, n);
    stampa(med);

    printf("\n");
    return 0;
}
