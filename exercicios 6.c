#include<stdio.h>
/*
Desenvolva um algoritimo em C que receba 2 n�meros inteiros (um positivo outro negativo) 
fornecido pelo usu�rio e atrav�s de 3 mensagens em tela, seja exibido o retorno 
de tr�s fun��es onde: a primeira retorne a informa��o do dobro dos n�meros e a segunda,
exiba o resultado da multiplica��o entre estes n�meros, e a terceira seja verificado e depois 
retornado em tela se o resultado da multiplica��o pela fun��o anterior ser� positivo ou negativo.
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
