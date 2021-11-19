#include <stdio.h>
#include <stdlib.h>

int main() {
    float **mat;
    int r, c, i, x, y, n;

    printf("inserisci dimensioni: ");
    scanf("%d", &r);
    printf("inserisci dimensioni: ");
    scanf("%d", &c);

    mat = (float **) malloc (r * sizeof(float *));

    for(i=0; i<r; i++) {
        mat[i] = (float *) malloc (c * sizeof(float));
    }

    for(int k = 0; k < r; k++) {
        for(int j = 0; j < c; j++) {
            mat[k][j] = 0;
        }
    }

    do{
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    printf("Inserisci numero: ");
    scanf("%d", &n);

    mat[x][y] = n;

    for(int k = 0; k < r; k++) {
        for(int j = 0; j < c; j++) {
            printf("%.2f ", mat[k][j]);
        }
        printf("\n");
    }
    }while(n != -1);

    free(mat);
    printf("\n");
    return 0;
}
