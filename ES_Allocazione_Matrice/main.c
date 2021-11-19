#include <stdio.h>
#include <stdlib.h>

int main() {
    int **mat;
    int n1;
    int n2;

    printf("Inserisci numero righe: ");
    scanf("%d", &n1);

    printf("Inserisci numero colonne: ");
    scanf("%d", &n2);

    mat = (int **) malloc (n2 * sizeof(int *));

    for(int k = 0; k < n1; k++) {
        mat[k] = (int *) malloc (n2 * sizeof(int));
    }

    for(int k = 0; k < n1; k++) {
        for(int i = 0; i < n2; i++) {
            printf("Inserisci valore in cella [%d][%d]", k, i);
            scanf("%d", &mat[k][i]);
        }
    }

    for(int k = 0; k < n1; k++) {
        for(int i = 0; i < n2; i++) {
            printf("%d ", mat[k][i]);
        }
        printf("\n");
    }

    free(mat);

    printf("\n");
    return 0;
}
