#include<stdio.h>
/*
Desenvolvaum algoritmo em C que em fun��o informe ao usu�rio em tela as mensagens :
�VERDADEIRO�: Quandoo usu�rio informar n� positivo(exemplo: 1,2,3,4,5);
�FALSO�: Quandoo usu�rio informar n� negativo(ex.: -1,-2,-3 etc)
�VOC� PRECISA SELECIONAR UMA DAS OP��ES�: Quandoo usu�rio informar valor Nulo (0).
*/
void positivo_negativo(float numero){
	if (numero > 0)
		printf("verdadeiro");
	else if(numero < 0)
		printf("falso");
	else
		printf("E obrigatorio escolher uma das opcoes");		
}
void main(){
	int num;
	printf("Digite qualquer numeros positivo ou negativo: ");
	scanf("%f",&num);
	positivo_negativo(num);
}
