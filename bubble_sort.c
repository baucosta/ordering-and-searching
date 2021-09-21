#include<stdio.h>
#include<string.h>

main() {
    char vet[15] = "TIMELINE", temp;
    int i, j, loop;

    
    for (i=0;i<strlen(vet);i++) {
        for(j=0;j<strlen(vet) - 1; j++) {
            if(vet[j] > vet[j+1]) {
                temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
            }
        }
        for (loop=0;loop<strlen(vet);loop++) {
            printf("%c", vet[loop]);
        }
        printf("\n\n");
    }
    // for (i=0;i<strlen(vet);i++) {
    //     printf("%c", vet[i]);
    // }
    // printf("\n\n");
}