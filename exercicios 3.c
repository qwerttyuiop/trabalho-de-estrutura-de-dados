#include<stdio.h>
/*Exerc�cio
Construir uma fun��o que retorne o resto de uma divis�o entre dois n�meros inteiros.
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


