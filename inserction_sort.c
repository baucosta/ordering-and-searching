#include<stdio.h>
#define MAX 6

main() {
    int vetor[MAX] = {12, 9, 11, 10, 6, 8};
    int i, j, aux;

    for(j=1; j<MAX; j++) {
        aux = vetor[j];
        i = j-1;

        while(i>=0 && vetor[i]>aux) {
            vetor[i+1] = vetor[i];
            i--;
        }
        vetor[i+1] = aux;
    }

    for(i=0; i<MAX; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

}