#include <stdio.h>

int main(void){
	
	//quantidade de homens
	int qtd_h, total_h;
	printf("Digite a quatidade de homens: ");
	scanf("%i",&qtd_h);
	total_h = qtd_h * 3;
	
	//quantidade de mulheres
	int qtd_m, total_m;
	printf("Digite a quatidade de mulheres: ");
	scanf("%i",&qtd_m);	
	total_m = qtd_m * 4;
	
	//quantidade de latas de refrigerantes necessárias para realizar uma festa.
	printf("A quantida de latas necessarias para uma festa com %i homens e %i mulheres e de\n",qtd_h,qtd_m);
	printf("%i", total_h + total_m);
	
	return 0;
}

