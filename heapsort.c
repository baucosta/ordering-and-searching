#include<stdio.h>

typedef char tipo;

void heapSort(tipo a[], int n);

main() {
    char string[20];
    printf("Digite a palavra: ");
    __fpurge(stdin);
    gets(string);
    heapSort(string, strlen(string));
    puts(string);
}

void heapSort(tipo a[], int n) {
   int i = n/2, pai, filho;
   tipo t;
   while(1) {
      if (i > 0) {
          i--;
          t = a[i];
      } else {
          n--;
          if (n == 0)
             return;
          t = a[n];
          a[n] = a[0];
      }
      pai = i;
      filho = i*2 + 1;
      while (filho < n) {
          if ((filho + 1 < n)  &&  (a[filho + 1] > a[filho]))
              filho++;
          if (a[filho] > t) {
             a[pai] = a[filho];
             pai = filho;
             filho = pai*2 + 1;
          }else
             break;
      }
      a[pai] = t;
   }
}
