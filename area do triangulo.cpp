#include <stdio.h>

int main(void){
	
	// ler as dimensões de um retângulo (base e altura)
	float a, b;
	printf("Digite o valor da altura do triangulo: ");
	scanf("%f",&a);
	printf("Digite o valor da base triangulo: ");
	scanf("%f",&b);
	//calcular
	float area = a * b/2;
	// escrever a área do retângulo.
	printf("A area do triangulo com altura %.2f e base %.2f e de %.2f",a,b,area);	
	return 0;
}
