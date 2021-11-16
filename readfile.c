#include<stdio.h>

void ler() {
    FILE *f;
    int value, i = 0;
    int allValues[5000];

    f = fopen("numeros.txt", "r");
    if(f!=NULL) {
        while(!feof(f)) {
            fscanf(f, "%d", &value);
            
            allValues[i] = value;
            i++
        }
        fclose(f);
    } else{
        printf("File does not exist");
    }
}

main() {

    ler();

}