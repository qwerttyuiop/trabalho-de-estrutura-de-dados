#include<stdio.h>
/*
Desenvolva um algoritmo em C que quando o usu�rio informar sua idade, 
seu nome  e seu n� de titulo em tela, se sua idade for maior que 18 e 
tem idade abaixo de 70 anos, informe mensagem que o usu�rio � obrigat�rio vota��o, e 
SE o usu�rio informar idade menor que for igual a 16 e maior que 70, informe em 
tela que o voto � facultativo.
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
