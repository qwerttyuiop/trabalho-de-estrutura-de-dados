#include<stdio.h>
//Exemplo 3
int square(int x){ //fun��o que mostrar� o valor ao quadrado do n�mero inserido
	printf("Quadrado de %d = %d",x,x*x); //printf que calcula e imprime em tela o valor da n�mero inserido ao quadrado
	return 0;
}
int main(){
	int num;
	printf("Coloque um numero: ");
	scanf("%d",&num); //pedindo para o usu�rio inserir um n�mero que ser� alocado na vari�vel
	square(num); //enviando o valor dessa vari�vel para a fun��o
	return 0;
}
