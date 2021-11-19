#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define LUNG 20

int main() {
    char *stringa;
    bool ok = true;
    int k = 0;

    printf("Inserisci stringa: ");
    scanf("%s", stringa);

    stringa = (char *) malloc (LUNG * sizeof(char));

    while(k < strlen(stringa)/2 && ok == true) {
        if(*(stringa + k) != *(stringa + (strlen(stringa)) - k - 1)) {
            ok=false;
        }
        k++;
    }

    if(ok == true) {
        printf("Palindroma");
    } else {
        printf("Non Palindroma");
    }

    free(stringa);

    printf("\n");
    return 0;
}
