#include<stdio.h>
/*
Desenvolva um algoritmo em que no bloco principal MAIN, demonstre através 
de chamadas e funções, as mensagens em tela referente à cada 
operação matemática que o usuário escolher (adição, subtração etc). 
Ou seja, serão 4 funções.:
*/
void adicao(int x,int y){
	printf("(%d) + (%d) = %d",x,y,x+y);
}
void sub(int x,int y){
	printf("(%d) - (%d) = %d",x,y,x-y);
}
void multi(int x,int y){
	printf("(%d) * (%d) = %d",x,y,x*y);
}
void div(int x,int y){
	printf("(%d) / (%d) = %d",x,y,x/y);
}
void main(){
	int escolha = 0,a,b;
	printf("Digite um numero para a e b: ");
	scanf("%d %d",&a,&b);
	printf("Determine sua operacao digitando um numero(Na frente das opcoes):");
	printf("\n1: (%d) + (%d) = ? ",a,b);
	printf("\n2: (%d) - (%d) = ? ",a,b);
	printf("\n3: (%d) * (%d) = ? ",a,b);
	printf("\n4: (%d) / (%d) = ? ",a,b);
	printf("\nNumero digitado: ");
	scanf("%d",&escolha);
	if(escolha == 1)
		adicao(a,b);
	else if(escolha == 2)
		sub(a,b);
	else if(escolha == 3)
		multi(a,b);
	else if(escolha == 4)
		div(a,b);
	else
		printf("Valor invalido");
}
