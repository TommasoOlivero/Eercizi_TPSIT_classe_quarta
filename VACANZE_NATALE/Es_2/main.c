#include <stdio.h>
#include <stdlib.h>

//Olivero Tommaso
//4^ A Rob
//ES_2

int DIM = 10;
int MAXSIZE = 50;
int stack[50];
int top = -1;

// Controllo se stack vuoto
int isempty() {

    if(top == -1)
        return 1;
    else
        return 0;
}

// Controllo se stack pieno
int isfull() {

    if(top == MAXSIZE)
        return 1;
    else
        return 0;
}


// Prelievo dati dallo stack
int pop(int data) {

    if(!isempty()) {
        data = stack[top];
        top = top - 1;
        return data;
    } else {
        printf("Impossibile prelevare dato, Stack vuoto.\n");
    }
}

// Inserimento dati nello stack
void push(int data) {

    if(!isfull()) {
        top = top + 1;
        stack[top] = data;
    } else {
        printf("Impossibile inserire dati, Stack Pieno.\n");
    }
}


void inserisciDatiVet(int vet[]) {
    int k,elemento;

    for(k=0; k<DIM; k++) {
        printf("inserisci l'elemento %d :",k);
        scanf("%d",&elemento);

        vet[k]=elemento;
    }
}

void inverti(int vet[]) {
    for(int k=DIM-1; k>=0; k--) {
        push(vet[k]);
    }
}


void stampa() {
    for(int i = 0; i < DIM; i++) {
        printf("| %d ",stack[i]);
    }
}

void main() {
    int vet[DIM];
    printf("Inserisci quantita di numeri da inserire: ");   //dimensione vettore
    scanf("%d", &DIM);

    inserisciDatiVet(vet);                                  //inserimento dati

    inverti(vet);                                           //inverte i dati

    printf("Stampa invertita:\n");
    stampa();                                               //stampa pila

    printf("\n");
    return 0;
}
