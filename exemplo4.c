#include<stdio.h>
//Exemplo 2
int fatorial(int n){
	int i,fat; 
	fat = 1; //inicializando a variavel fatorial com 1
	for(i=1;i<=n;i++){ 
		fat=fat*i; //multiplicando o valor de fatorial por i at� chegar no valor desejado
	}
		return (fat); //retornando o valor do c�lculo realizado na var�avel fatorial
}
int main(){
	int limite; 
	char tecla;
	printf("Calculo de fatorial\n");
	printf("Qual fatorial?");
	scanf("%d",&limite); //pedindo do usu�rio a vari�vel que ser� feito o fatorial
	printf("Fatorial de %d = %d\n",limite,fatorial(limite)); //enviando a vari�vel, e pedindo para mostrar o que � retornado
	printf("Tecle <ENTER> para finalizar");
	tecla = getche();
	return 0;
}
