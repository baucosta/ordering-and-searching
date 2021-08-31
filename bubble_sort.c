#include<stdio.h>
#include<string.h>

main() {
    char vet[15] = "PASARGADA", temp;
    int i, j;

    
    for (i=0;i<strlen(vet);i++) {
        for(j=0;j<strlen(vet) - 1; j++) {
            if(vet[j] > vet[j+1]) {
                temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
            }
        }
    }
    for (i=0;i<strlen(vet);i++) {
        printf("%c", vet[i]);
    }
    printf("\n\n");
}