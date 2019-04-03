#include<stdio.h>
/*
Desenvolva um algoritmo em C que quando o usuário informar sua idade, 
seu nome  e seu nº de titulo em tela, se sua idade for maior que 18 e 
tem idade abaixo de 70 anos, informe mensagem que o usuário é obrigatório votação, e 
SE o usuário informar idade menor que for igual a 16 e maior que 70, informe em 
tela que o voto é facultativo.
*/
void main(){
	int titulo,idade;
	char nome[100];
	printf("Digite seu nome completo: ");
	scanf("%s",&nome);
	printf("\nDigite o numero do seu titulo: ");
	scanf("%d",&titulo);
	printf("\nDigite sua idade: ");
	scanf("%d",&idade);
	if((idade >= 18) && (idade <=70))
		printf("\n%s, voce e obrigado a votar",nome);
	else
		printf("\n%s, o voto e facultativo",nome);	
}
