#include <stdio.h>
#include <stdlib.h>

int main() {
    float *v;
    int n, cont;
    float somma = 0;

    printf("Inserisci numero elmenti del vettore: ");
    scanf("%d", &n);

    v = (float *) malloc (n*sizeof(float));

    for(int k = 0; k < n; k++) {
        printf("Inserisci valore della cella[%d]", k);
        scanf("%f", &v[k]);
    }

    printf("\n");
    for(int k = 0; k < n; k++) {
        printf("%.2f ", v[k]);
    }

    printf("\nValori ripetuti: ");
    for(int i = 0; i < n; i++) {
        for(int k = 0; k < n; k++) {
            if(v[i] == v[k]) {
                cont++;
            }
        }

        if(cont >= 2){
            printf("%.2f ", v[i]);
        }else{
            somma += v[i];
        }
        cont = 0;
    }

    printf("\nSomma numeri non ripetuti: %.2f", somma);
    free(v);
    printf("\n");
    return 0;
}
