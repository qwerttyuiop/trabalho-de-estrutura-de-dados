#include<stdio.h>
#include<math.h>
//Calculo IMC: massa/(altura*altura)
void main(){
	float alt,peso,imc;
	printf("Digite peso: ");
	scanf("%f",&peso);
	printf("Digite altura: ");
	scanf("%f",&alt);
	imc = peso/(alt*alt);
	printf("IMC = %2.2f\n",imc);
	if(imc <= 18.5){
		printf("Abaixo do peso");
	}else if(imc < 25){
		printf("Saudavel");
	}else if(imc <30){
		printf("Peso em excesso");
	}else if(imc < 35){
		printf("Obesidade Grau I");
	}else if(imc < 40){
		printf("Obesidade Grau II (Severa)");
	}else if(imc >= 40){
		printf("Obesidade Grau III (Morbida)");
	}else{
		printf("Coloque um valor valido");
	}
}
