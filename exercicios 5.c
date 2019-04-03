#include<stdio.h>
/*
Desenvolvaum algoritmo em C que em função informe ao usuário em tela as mensagens :
“VERDADEIRO”: Quandoo usuário informar nº positivo(exemplo: 1,2,3,4,5);
“FALSO”: Quandoo usuário informar nº negativo(ex.: -1,-2,-3 etc)
“VOCÊ PRECISA SELECIONAR UMA DAS OPÇÕES”: Quandoo usuário informar valor Nulo (0).
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
