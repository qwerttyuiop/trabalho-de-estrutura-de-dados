#include<stdio.h>
/*Exerc�cio
Escrever uma fun��o que recebe dois n�meros inteiros, positivo, e determine o produto dos mesmos, utilizando o seguinte m�todo de multiplica��o.
 Dividir, sucessivamente, o primeiro n�mero por 2, at� que se obtenha 1 como quociente;
 Paralelamente, dobrar, sucessivamente, o segundo n�mero;
 Somar os n�meros da segunda coluna que tenham um n�mero  �mpar na primeira coluna. O total obtido � o produto procurado.
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

