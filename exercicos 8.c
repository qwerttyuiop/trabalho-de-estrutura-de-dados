#include<stdio.h>
#define TAM 5

//Exercício - Parte II
/*
4.Desenvolva Um algoritmo que receba números para preencher um 
vetor (pode ser tam 5, use/defina uma constante para isso) e 
através de retorno de uso de função seja exibido em tela quem é 
o maior e quem é o menor número do vetor. Transcreva abaixo :
*/

int maior_menor(int *vetor){
	int maior = vetor[0],menor = vetor[0],i;
	for(i = 0;i < TAM;i++){
		if(maior < vetor[i])
			maior = vetor[i];
		else if(menor > vetor[i])
			menor = vetor[i];
	}
	printf("\nMaior = %d",maior);
	printf("\nMenor = %d",menor);
}
void main(){
	int i,vet[TAM];
	for(i = 0;i < TAM;i++){
		printf("Digite o numero que sera colocado no vetor %d: ",i+1);
		scanf("%d",&vet[i]);
	}
	maior_menor(&vet);
}
