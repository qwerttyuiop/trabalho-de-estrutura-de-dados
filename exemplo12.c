#include<stdio.h>
#include<math.h>
//Exemplo - Paralelepípedo
float hipotenusa(float a, float b){
	return sqrt(a*a+b*b);
}
void main(){
	float a,b,c,d;
	printf("Entre com A, B e C: \n");
	scanf("%f %f %f",&a,&b,&c);
	d= hipotenusa(hipotenusa(a,b),c);
	printf("Diagonal = %2.2f",d);
}

