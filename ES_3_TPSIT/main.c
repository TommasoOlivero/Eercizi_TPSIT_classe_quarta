#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LUNG 300
#define DIM 100

typedef struct {
    int num;
    char data[LUNG];
    char titolo[LUNG];          //definizione delle variabili per la struttura
    char disp[LUNG];
    char genere[LUNG];
} film;

void modificaStringa(char str[], film * x) {
    int k=0;
    int j=0;
    char * p=strtok(str, ",");
    strcpy(x->titolo, p);
    p=strtok(NULL, ",");
    strcpy(x->genere, p);
    p=strtok(NULL, ",");                    //Divisione della stringa con l'uso del strtok
    strcpy(x->data, p);
    p=strtok(NULL, ",");
    strcpy(x->disp, p);
}

int main() {

    FILE*fp;
    film tabella[DIM];
    char appoggio[LUNG];
    fp=fopen("listafilm.csv.txt","r");                        //apertura file variabili
    int k=0;
    while(fscanf(fp, "%d,",&tabella[k].num)!=EOF) {
        fgets(appoggio, 70,fp);
        modificaStringa(appoggio, &tabella[k]);         //divisione della stringa in parti piu piccole
        k++;
    }
    for(int j=0; j<k; j++) {
        //stampa informazioni di ogni film
        printf("Num: %2d, Tit:%s, gen: %s, data: %s, disp: %s\n",tabella[j].num, tabella[j].titolo,tabella[j].genere,tabella[j].data,tabella[j].disp);
    }
    fclose(fp);
    return 0;
}

