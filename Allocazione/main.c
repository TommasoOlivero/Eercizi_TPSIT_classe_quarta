#include <stdio.h>
#include <stdlib.h>

int main() {
    char *car;
    int *num;

    num = (int *) malloc (sizeof(int));
    car = (char *) malloc (sizeof(char));

    *num = 5;
    *car = 'T';

    printf("%d - %d\n", num, *num);
    printf("%d - %c", car, *car);

    printf("\n");
    return 0;
}
