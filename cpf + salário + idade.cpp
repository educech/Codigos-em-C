#include <stdio.h>

int main(){
	
	//receba CPF
	int cpf;
	printf("CPF: ");
	scanf("%i",&cpf);
	
	//idade
	int idade;
	printf("IDADE: ");
	scanf("%i",&idade);
	
	//sexo (1 Masculino ou 2 Feminino
	int sexo;
	printf("[1]MASCULINO/[2]FEMININO\n");
	printf("SEXO: ");
	scanf("%i",&sexo);
	
	// salário fixo de um funcionário
	float sal_fixo;
	printf("SALARIO FIXO: ");
	scanf("%i",&sal_fixo);
	
	// mostre o CPF e o salário líquido (salário fixo + Acréscimo):
	// se sexo 1 idade maior ou igual a 65, acrescimo de 10%
	float porc = sal_fixo * 0.1;
	if(sexo == 1, idade >= 65){
		printf("SALARIO LIQUIDO %f ",sal_fixo + porc);
	}
		// se M idade < 65 acrescimo de 8%
		// se F idade > 60 acrescimo de 12%
		// se F idade < 60 acrescimo de 10%
	
	
	return 0;
}
