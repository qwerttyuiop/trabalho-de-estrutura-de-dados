#include<stdio.h>
//Exemplo de Par�metros 1
int mult(float a, float b, float c){ //fun��o que multiplicar� os valores enviados, recebendo 3 par�metros
	printf("%f",a*b*c); //multiplicando os tr�s valores e mostrando na tela
	return 0;
}
int main(){
	float x,y; //criando duas vari�veis com valores reais
	x=23.5; //adicionando valores a essas vari�veis sem pedir do usu�rio
	y=12.9;
	mult(x,y,3.87); //enviando as v�ri�veis e uma constante para a fun��o
	return 0;
}f
