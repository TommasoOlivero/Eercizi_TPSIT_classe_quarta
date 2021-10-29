#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define LUNG 20

int main() {
    char stringa[LUNG];
    bool ok = true;
    int k = 0;

    printf("Inserisci stringa: ");
    scanf("%s", stringa);

    int n = strlen(stringa);

    while(k< n/2 && ok == true) {
        if(*(stringa + k) != *(stringa + (n - k - 1))) {
            ok=false;
        }
        k++;
    }

    if(ok == true) {
        printf("Palindroma");
    } else {
        printf("Non Palindroma");
    }

    printf("\n");
    return 0;
}
