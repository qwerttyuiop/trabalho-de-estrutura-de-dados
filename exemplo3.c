#include<stdio.h>
//Exemplo 1
int fatorial(int n){ //criado a fun��o fatorial
	int i,fat;
	fat = 1; //iniciando a variavel que receber� o fatorial fatorial com 1
	for(i=1;i<=n;i++){
		fat=fat*i; //multiplicando fatorial pelo valor de 1, que vai de 1 at� o valor inserido pelo usu�rio
	}
		printf("Fatorial de %d = %d\n",n,fat); //demonstrando o resultado
		return 0;
}
int main(){
	int limite; 
	char tecla;
	printf("Calculo de fatorial\n");
	printf("Qual fatorial?");
	scanf("%d",&limite); //pedindo a v�ri�vel que vamos criar a fatorial
	fatorial(limite); //enviando o valor da vari�vel para a fun��o que far� o c�lculo
	printf("Tecle <ENTER> para finalizar");
	tecla = getche();
	return 0;
}
