#include<stdio.h>
//Exemplo de parametros 2
int prod(int x,int y){ //funcao que multiplicar� os parametros
	return x*y; //retornando os par�metros multiplicados para a fun��o principal
}

int main(){
	int saida; 
	saida = prod(12,7); //a vari�vel recebe o valor retornado pela fun��o
	printf("A saida e %d\n",saida); //imprime o que est� na vari�vel sa�da
	return 0;
}
