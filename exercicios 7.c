#include<stdio.h>
/*
Escreva abaixo um algoritmo em que seja possível ao usuário escolher a 
dimensão de uma estrutura/matriz (onde o usuário define a quantidade de linhas e colunas),
e em seguida seja exibida esta matriz em tela, transcreva o algoritmo para o espaço abaixo. :
*/
void main(){
	int a,b,i,j;
	printf("Digite quantas linhas usa matriz vai ter:");
	scanf("%d",&a);
	printf("Digite quantas colunas usa matriz vai ter:");
	scanf("%d",&b);
	int vet[a][b];
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("\nDigite o numero da linha %d e coluna %d: ",i+1,j+1);
			scanf("%d",&vet[i][j]);
		}		
	}
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("\nLinha %d, Coluna %d = %d",i+1,j+1,vet[i][j]);
		}		
	}
}
