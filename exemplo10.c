#include<stdio.h>
#include<conio.h>
//Exemplo - Passagem de Parametro por referência 2
int troca(int *a, int *b){
	int x;
	if(*a>*b){
		x = *a;
		*a = *b;
		*b = x;
	}
}

void main(){
	int vet[9],i,j;
	printf("Ordenacao de vetor\n\n");
	for(i = 0;i <= 9;i++){
		printf("Entre com o %do elemento: ",i+1);
		scanf("%d",&vet[i]);
	}
	for(i=0;i <=9;i++){
		for(j=i+1;j<=9;j++){
			troca(&vet[i],&vet[j]);
		}
	}
	
	for(i = 0;i <= 9;i++){
		printf("\n%do. elemento: %d",i+1,vet[i]);
	}
}
