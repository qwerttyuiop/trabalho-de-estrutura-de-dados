#include<stdio.h>
/*Exercício
Escrever uma função para fazer um programa que transforme  segundos em horas, minutos e segundos.
   Ex.: 11030 = 3h 3min 50seg
*/
int tempo(int seg_tot){ //função que passa de segundos para horas, minutos e segundos;
	int seg,min,hora;
	hora = seg_tot/3600;
	min = (seg_tot/60)%60;
	seg = (seg_tot%60)%60;
	
	printf("%dh %dm %ds\n\n",hora,min,seg);
	return 0;
}
void main(){
	int segundos;	
	printf("Digite a quantidade total de segundos: ");
	scanf("%d",&segundos);
	tempo(segundos);
}
