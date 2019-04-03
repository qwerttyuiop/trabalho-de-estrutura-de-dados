#include<stdio.h>
/*Exercício
Escrever uma função que recebe dois números inteiros, positivo, e determine o produto dos mesmos, utilizando o seguinte método de multiplicação.
 Dividir, sucessivamente, o primeiro número por 2, até que se obtenha 1 como quociente;
 Paralelamente, dobrar, sucessivamente, o segundo número;
 Somar os números da segunda coluna que tenham um número  ímpar na primeira coluna. O total obtido é o produto procurado.
*/
int mult(int a, int b){
	int tot=0;
	while(a != 1){
		printf("\na = %d b= %d",a,b);
		if(a%2 == 1){
			tot = tot+(a*b);
		}
		a = a/2;
		b = b*2;		
	}
	return tot;
}
void main(){
	int a,b;
	printf("Digite dois numeros inteiros: ");
	scanf("%d %d",&a,&b);
	printf("\n\nTotal obtido sera %d",mult(a,b));
}

