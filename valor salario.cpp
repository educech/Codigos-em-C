#include <stdio.h>

int main(void){
	
	//leia o n�mero de horas trabalhadas em um m�s
	float h_mes;
	printf("Digite as horas trabalhadas em um mes:");
	scanf("%f",&h_mes);
	
	//o sal�rio por hora
	float sal_hora;
	printf("Digite o valor do salario por hora:");
	scanf("%f",&sal_hora);
	
	//escreva o sal�rio total do funcion�rio
	float sal_total = sal_hora * h_mes;
	if (h_mes <= 160){
		printf("O salario total do funcionario e: %.2fR$",sal_total);
	}
	//hora extra =  valor da hora regular com um acr�scimo de 50%
	else{
		float extras = h_mes - 160;
		sal_total = sal_total + (extras * sal_hora * 0.5 );
		printf("O salario total do funcionario e: %.2fR$",sal_total);		
	}
		
	return 0;
}
