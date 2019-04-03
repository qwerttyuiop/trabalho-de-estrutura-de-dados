#include<stdio.h>
#include<math.h>
/*
Desenvolva um algoritimo que o usuário informe dois números e 
que através de chamada de funções seja retornado em tela o seguinte:
O dobro destes números
O quadrado destes números 
A divisão entre os números
O resto da divisão entre os números 
E diga se :
O resultado da soma entre os números foi uma resposta positiva ou se foi uma resposta negativa
*/
void dobro(int x, int y){
	printf("\nDobro de %d = %d e Dobro de %d = %d",x,x*2,y,y*2);
}
void quadrado(int x, int y){
	printf("\nQuadrado de %d = %d e Quadrado de %d = %d",x,x*x,y,y*y);
}
void div(int x, int y){
	printf("\nDivisao de %d por %d = %d",x,y,x/y);
}
void resto(int x, int y){
	printf("\nResto da divisao entre %d e %d = %d",x,y,x%y);
}
void resposta(int x, int y){
	int soma = x + y;
	printf("\n\nSoma entre %d e %d = %d",x,y,soma);
	if(soma > 0)
		printf("\nPositivo");
	else if(soma < 0)
		printf("\nNegativo");
	else
		printf("\nValor nulo");
}
void main(){
	int a,b;
	printf("Digite um numero para a e b: \n");
	scanf("%d %d",&a,&b);
	dobro(a,b);
	quadrado(a,b);
	div(a,b);
	resto(a,b);
	resposta(a,b);	
}
