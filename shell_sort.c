#include<stdio.h>
#define MAX 15

main() {
    int num[MAX] = {5, 50, 20, 4, 3, 2, 33, 18, 47, 12, 26, 28, 37, 3, 48};
    int i,j,valor;
    int h=1;

    do {
        h=(3*h) + 1;
    } while(h<MAX);

    do {
        h/=3; //ou h = h/3
        for(i=h;i<MAX;i++) {
            valor = num[i];
            j=i-h;
            
            while(j>=0 && valor<num[j]) {
                num[j+h] = num[j];
                j-=h;
            }
            num[j+h] = valor;
        }
    } while(h>1);

    for(i=0;i<MAX;i++) {
        printf("%d ", num[i]);
    }
    printf("\n");
}