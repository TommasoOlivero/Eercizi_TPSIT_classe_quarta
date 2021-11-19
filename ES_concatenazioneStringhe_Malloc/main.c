#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str1;
    char *str2;
    char *str3;

    str1 = (char *) malloc (20 * sizeof(char));
    str2 = (char *) malloc (20 * sizeof(char));
    str3 = (char *) malloc (20 * sizeof(char));

    printf("Inserisci prima stringa: ");
    scanf("%s", str1);
    printf("Inserisci prima stringa: ");
    scanf("%s", str2);

    int s1 = strlen(str1);
    int s2 = strlen(str2);
    int s3 = s1 + s2;

    for(int k=0; k < s1; k++){
        *(str3 + k) = *(str3 + k) + *(str1 + k);
    }

    int i = 0;
    for(int j = s1 - 1; j < s1 + s2; j++){
        *(str3 + j) = *(str3 + j) + *(str1 + i);
        i++;
    }

    free(str1);
    free(str2);
    free(str3);

    printf("\n%s", str3);

    printf("\n");
    return 0;
}
