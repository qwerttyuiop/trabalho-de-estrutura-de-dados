#include<stdio.h>
#include<math.h>
/*
Desenvolva um algoritimo que o usu�rio informe dois n�meros e 
que atrav�s de chamada de fun��es seja retornado em tela o seguinte:
O dobro destes n�meros
O quadrado destes n�meros 
A divis�o entre os n�meros
O resto da divis�o entre os n�meros 
E diga se :
O resultado da soma entre os n�meros foi uma resposta positiva ou se foi uma resposta negativa
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
