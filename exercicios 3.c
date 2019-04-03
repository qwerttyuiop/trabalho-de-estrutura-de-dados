#include<stdio.h>
/*Exercício
Construir uma função que retorne o resto de uma divisão entre dois números inteiros.
*/
int div_int(int a, int b){
	return a%b;
}
void main(){
	int a,b;
	printf("Digite dois numeros inteiros: ");
	scanf("%d %d",&a,&b);
	printf("A divisao de %d e %d tem resto %d",a,b,div_int(a,b));
}


