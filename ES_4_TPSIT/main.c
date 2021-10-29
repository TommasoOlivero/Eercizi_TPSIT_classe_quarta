#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LUNG 300
#define DIM 100


typedef struct {
    int num;
    char data[LUNG];
    char titolo[LUNG];                  //Struttura
    char disp[LUNG];
    char genere[LUNG];
} Film;

void pezzo(char *str, Film * x) {
    char * p=strtok(str, ",");
    strcpy(x->titolo, p);
    p=strtok(NULL, ",");
    strcpy(x->genere, p);           //Assegnazione a ogni variabile della struttua il suo pezzo di stringa
    p=strtok(NULL, ",");
    strcpy(x->data, p);
    p=strtok(NULL, ",");
    strcpy(x->disp, p);
}

void stampa(Film schema[], int n) {

    for(int j=0; j<n; j++) {
        printf("%-2d \t ",(schema+j)->num);
        printf("%-40s \t ", (schema+j)->titolo);
        printf("%-20s \t ", (schema+j)->genere);            //Stampa del file csv a video
        printf("%-10s \t ", (schema+j)->data);
        printf("%-20s\n", (schema+j)->disp);
    }
}

void leggi(Film schema[]) {
    FILE*fp;
    char appoggio[LUNG];
    int k=0;

    fp=fopen("listafilm.csv.txt","r");

    if(fp == NULL) {
        printf("Il file non esiste\n");
    } else {
        while(fscanf(fp, "%d,",&(schema+k)->num) != EOF) {  //lettura fino al fondo del file
            fgets(appoggio, LUNG,fp);                       //prendo la linea
            pezzo(appoggio, schema+k);                      //divisione in pezzi
            k++;
        }
    }
    fclose(fp);
}

int nRighe(){
    FILE*fp;
    char appoggio[LUNG];
    int num;

    fp=fopen("listafilm.csv.txt","r");

    if(fp == NULL) {                                //se il file non esiste
        printf("Il file non esiste\n");
        num = 0;
    } else {
        while(fgets(appoggio, LUNG,fp) != NULL) {  //lettura di una riga
            num++;
        }
    }
    fclose(fp);

    return num;                                     //Restituzione numero righe
}


int main() {
    Film *schema;
    int n = nRighe();

    schema = (Film*) malloc (n*sizeof(Film));

    leggi(schema);

    stampa(schema, n);

    free(schema);

    return 0;
}
