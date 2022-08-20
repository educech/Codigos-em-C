#include <stdio.h>

int main(void){
	
	//Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:
	float salario, salarionovo;
	printf("Digite o salario do colaborador: ");
	scanf("%f",&salario);
	
	//Salários até R$ 1.300,00 (incluindo): aumento de 13%
	if(salario <= 1300){
		salarionovo = salario + (salario * 13/100);
	}
	
	// Salários entre R$ 1.300,00 e R$ 6.000,00(incluindo): aumento de 12%
	if(salario > 1300 && salario <= 6000){
		salarionovo = salario + (salario * 12/100);
	}
	// Salários entre R$ 6.000,00 e R$ 15.000,00(incluindo): aumento de 11%
	if(salario > 6000 && salario <= 15000){
		salarionovo = salario + (salario * 11/100);
	}
	//Salários de R$ 15.000,00 em diante: aumento de 10%
	else{
		salarionovo = salario + (salario * 10/100);
	}
	
	//Após o aumento ser realizado, informe na tela: O salário antes do reajuste;
	printf("Valor do salario antes do reajuste %2.f\n", salario);
	
	//O valor do aumento;
	float aumento = salarionovo - salario;
	printf("O valor do aumento e de %2.f\n", aumento);
	
	//O novo salário, após o aumento.
	printf("O novo salario e de %2.f\n", salarionovo);
		
}
