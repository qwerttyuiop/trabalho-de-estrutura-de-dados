#include<stdio.h>
//Exemplo de parâmetros 3
int soma_dobro(int a,int b){
	int soma;
	a = 2*a;
	b = 2*b;
	soma = a+b;
	return (soma);
}
int main(){
	int x,y,res;
	printf("Digite o primeiro numero: ");
	scanf("%d",&x);
	printf("Digite o segundo numero: ");
	scanf("%d",&y);
	res = soma_dobro(x,y);
	printf("\nA soma do dobro dos numeros e: %d",res);
	return 0;
}
