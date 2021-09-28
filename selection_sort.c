#include<stdio.h>
#define MAX 6

main() {
    int vetor[MAX] = {12, 9, 11, 10, 6, 8};
    int i, j, min, aux;

    
    for(i=0;i<MAX-1;i++) {
        min = i;
        for(j=i+1;j<MAX;j++) {
            if(vetor[j]<vetor[min]) {
                min=j;
            }
        }
        aux=vetor[min];
        vetor[min] = vetor[i];
        vetor[i]=aux;
    }

    for(i=0;i<MAX;i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");
}