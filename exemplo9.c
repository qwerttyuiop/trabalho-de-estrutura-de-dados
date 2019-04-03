#include<stdio.h>
//Exemplo - Passagem de parâmetro por referência
int troca(int *a, int *b){
	int x;
	x = *a;
	*a = *b;
	*b = x;
	return 0;	
}
void main(){
	int n,k;
	printf("Digite dois valores: ");
	scanf("%d %d",&n,&k);
	printf("Antes da troca n = %d e k = %d\n",n,k);
	troca(&n,&k);
	printf("Depois da troca n = %d e k = %d",n,k);
}
