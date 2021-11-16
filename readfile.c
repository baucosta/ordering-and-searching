#include<stdio.h>
#define MAX 5000

void ler(allValues[5000]) {
    FILE *f;
    int value, i = 0;

    f = fopen("numeros.txt", "r");
    if(f!=NULL) {
        while(!feof(f)) {
            fscanf(f, "%d", &value);
            
            allValues[i] = value;
            i++;
        }
        fclose(f);
    } else{
        printf("File does not exist");
    }
}

main() {
    int allValues[MAX];

    
    ler(allValues);

    for(int i=0; i<MAX; i++) {
        printf("Numero: %d\n", allValues[i]);
    }

}