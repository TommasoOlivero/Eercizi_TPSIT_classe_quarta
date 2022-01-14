#include <stdio.h>
#include <stdlib.h>

#define N_PIAZENTI 2

//Olivero Tommaso
//4^ A Rob
//ES_3

typedef struct {
    char nome[256];
    char cognome[256] ;
    int matricola;
    int pressione[2];
    int temperature[3];
    float parcella;
} Paziente;

//3
void inserisciPaziente(Paziente *p) {
    printf("inserisci il nome del Paziente : ");
    scanf("%s",p->nome);
    printf("inserisci il cognome del Paziente : ");
    scanf("%s",p->cognome);
    printf("inserisci la matricola : ");
    scanf("%d",&p->matricola);

    printf("inserisci la pressione minima :");
    scanf("%d",&p->pressione[0]);
    printf("inserisci la pressione max :");
    scanf("%d",&p->pressione[1]);


    printf("inserisci la temperatura mattino :");
    scanf("%d",&p->temperature[0]);
    printf("inserisci la temperatura pomeriggio :");
    scanf("%d",&p->temperature[1]);
    printf("inserisci la temperatura sera :");
    scanf("%d",&p->temperature[2]);

    printf("inserisci la parcella :");
    scanf("%f",&p->parcella);
}

//4
void stampaPaziente(Paziente *p) {
    printf("pressione minima : %d\n",p->pressione[0]);
    printf("pressione max : %d",p->pressione[1]);
}

//5
double saldoClinica(Paziente clinica[], int num_piazenti) {
    float somma=0;
    for(int k=0; k< num_piazenti; k++) {
        somma += clinica[k].parcella;
    }
}

int main() {

    int i;
    //1
    Paziente rossi;

    //2
    Paziente clinica[20];

    //6
    for(int k = 0; k < N_PIAZENTI; k++) {
        inserisciPaziente(&rossi);

    }

    for(int k = 0; k < N_PIAZENTI; k++) {
        stampaPaziente(&rossi);
    }
    printf("\nSaldo clinica : %d", saldoClinica(clinica, N_PIAZENTI));

    fflush(stdin);
    return 0;
}
