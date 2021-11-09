#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int compara(void *x,void *y);

main(){

	char nome[30];
	
	time_t t1,t2;
	printf("\nInforme o nome: ");
	__fpurge(stdin);
	gets(nome);
	printf("\nDesordenado: ");
	puts(nome);
	time(&t1);

	qsort(nome,(size_t)strlen(nome),sizeof(char),compara);


    // sleep(15);
	
    time(&t2);
	
    printf("\nOrdenado: ");
	puts(nome);
	printf("\nTempo = %d\n",t2-t1);
}
int compara(void *x,void *y){
	if(*(char *)x>*(char *)y)
		return 1;
	if(*(char *)y>*(char *)x)
		return -1;
	return 0;
}