#include<stdio.h>

#define MAX 10

void Quick(int vetor[MAX], int inicio, int fim);
int main(){

   int vetor[MAX] = {50, 100, 12, 42, 18, 23, 5, 51, 13, 16};

   int i;
   printf("Vetor desordenado:\n");
   for(i = 0; i < MAX; i++){
      printf("%d ", vetor[i]);
   }
   printf("\n");

   Quick(vetor, 0, MAX-1);

   printf("Vetor ordenado:\n");
   for(i = 0; i < MAX; i++){
      printf("%d ", vetor[i]);
   }
   printf("\n");
}

void Quick(int vetor[MAX], int inicio, int fim){
   /*inicio do codigo do particionameto*/
   int pivo, aux, i, j, meio;

   //esq
   i = inicio;
   //dir
   j = fim;

   meio = (int) ((i + j) / 2);
   pivo = vetor[meio];
   printf("Numero Pivo: %d\n",pivo);
   //printf("%d %d %d\n",i,j,fim);

   do{
      while (vetor[i] < pivo)
          i = i + 1;
      while (vetor[j] > pivo)
          j = j - 1;
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i = i + 1;
         j = j - 1;
      }

   }while(j > i);
   /*fim do codigo do particionameto*/

   /*QuickSort, ou seja, o quick chama primeiro o paticionamento anteriormente. Em seguida faz esta analise*/
   for(aux = 0; aux < MAX; aux++)
      printf("%d ", vetor[aux]);
   printf("\n");
   if(inicio < j){
      //printf("Entrou 1\n");
      Quick(vetor, inicio, j);
    }
    //printf("I: %d J: %d fim: %d Pivo: %d Inicio %d\n",i,j,fim,pivo,inicio);
    /*for(aux = 0; aux < MAX; aux++)
       printf("%d ", vetor[aux]);
    printf("\n");*/
    if(i < fim){
      //printf("Entrou\n");
      Quick(vetor, i, fim);
    }
}
