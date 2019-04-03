#include<stdio.h>
/*
Escrever no espa�o o algoritmo para ler e imprimir dois n�meros 
inteiros positivos. Atrav�s de fun��es, demonstre:
Se o primeiro numero for positivo, imprima o seu quadrado;
Se o segundo n�mero for maior que 10 e menor que 100, imprimir a 
mensagem: "N�mero est� entre 10 e 100 - intervalo permitido";
Se o segundo n�mero for menor que o primeiro, calcular e imprimir 
a diferen�a (um menos o outro) entre eles, caso contr�rio, imprimir 
o primeiro n�mero adicionado de 1 .
*/
void quadrado(int x){
	if(x > 0)
		printf("\nQuadrado de %d = %d",x,x*x);
}
void intervalo(int y){
	if((y > 10) && (y < 100))
		printf("\nEsse numero esta entre 10 e 100 - intervalo permitido",y);
}
void dif_ou_1(int x, int y){
	if(y < x)
		printf("\n%d - %d = %d",x,y,x-y);
	else
		printf("\n%d + 1 = %d",x,x+1);
}
void main(){
	int a,b;
	printf("Digite um numero para a e b::\n");
	scanf("%d %d",&a,&b);
	quadrado(a);
	intervalo(b);
	dif_ou_1(a,b);
}
