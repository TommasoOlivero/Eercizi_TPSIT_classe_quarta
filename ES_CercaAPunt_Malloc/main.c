#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define LUNG 20

int main() {
    char *stringa;
    bool ok = false;
    int k = 0;

    stringa = (char *) malloc (20 * sizeof(char));

    printf("Inserisci una stringa: ");
    scanf("%s", stringa);

    while(k < 10 && ok == false){
        if(*(stringa + k) == 'A'){
            ok = true;
        }
        k++;
    }

    if(ok == true){
        printf("E' presente una A");
    }else{
        printf("Non e' presente una A");
    }

    free(stringa);

    printf("\n");
    return 0;
}
