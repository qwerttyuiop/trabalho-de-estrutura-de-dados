#include<stdio.h>
//Exemplo - Se/if
void main(){
	int idade;
	printf("Informe sua idade: ");
	scanf("%d",&idade);
	if(idade < 18 ){ //cria��o da da escolha: se idade for menor que 18 fa�a
		printf("Menor de idade"); //se for, imprima que � menor de idade
	}else{ 
		printf("Maior de idade"); //se n�o for, imprima que � maior de idade
	}
}
