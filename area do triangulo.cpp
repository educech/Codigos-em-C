#include <stdio.h>

int main(void){
	
	// ler as dimens�es de um ret�ngulo (base e altura)
	float a, b;
	printf("Digite o valor da altura do triangulo: ");
	scanf("%f",&a);
	printf("Digite o valor da base triangulo: ");
	scanf("%f",&b);
	//calcular
	float area = a * b/2;
	// escrever a �rea do ret�ngulo.
	printf("A area do triangulo com altura %.2f e base %.2f e de %.2f",a,b,area);	
	return 0;
}
