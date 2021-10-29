#include <stdio.h>
#include <stdlib.h>

#define DIM 5

int main() {
    int vett[DIM];

    for(int k = 0; k < DIM; k++){
        printf("Cella [%d]: ", k);
        scanf("%d", (vett + k));
    }

    int n = DIM / 2;
    int app;

    for(int k = 0; k < n; k++){
        app = *(vett + k);
        *(vett + k) = *(vett + (DIM - k - 1));
        *(vett + (DIM - k - 1)) = app;
    }

    for(int k = 0; k < DIM; k++){
        printf("%d ", *(vett + k));
    }

    printf("\n");
    return 0;
}
