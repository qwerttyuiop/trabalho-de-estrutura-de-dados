#include<stdio.h>
/*
Desenvolva um algoritimo em C que receba 2 números inteiros (um positivo outro negativo) 
fornecido pelo usuário e através de 3 mensagens em tela, seja exibido o retorno 
de três funções onde: a primeira retorne a informação do dobro dos números e a segunda,
exiba o resultado da multiplicação entre estes números, e a terceira seja verificado e depois 
retornado em tela se o resultado da multiplicação pela função anterior será positivo ou negativo.
*/
int dobro(int a,int b){
	printf("\nDobro de %d = %d e dobro de %d = %d",a,2*a,b,2*b);
	return 0;
}
int multiplicacao(int a,int b){
	printf("\n\nA multiplicacao entre %d e %d = %d",a,b,a*b);
	return a*b;
}
void v_ou_f(int m){
	printf("\n\n");
	if(m > 0)
		printf("Valor Positivo");
	else if(m < 0)
		printf("Valor Negativo");
	else
		printf("Valor nulo");
}
void main(){
	int x,y,multi;
	printf("Informe 2 numeros inteiros: ");
	scanf("%d %d",&x,&y);
	dobro(x,y);
	multi = multiplicacao(x,y);
	v_ou_f(multi);
}
