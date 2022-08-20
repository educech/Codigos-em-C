#include <stdio.h>

int main(void){
	// leia as duas notas de um aluno
	float n1,n2,media;
	printf("Digite a primeira nota: ");
	scanf("%f",&n1);
	printf("Digite a segunda nota: ");
	scanf("%f",&n2);
	//calcule e mostre a sua média.
	media = (n1+n2)/2;
	printf("A media das notas %.2f + %.2f e %.2f",n1,n2,media);
	
	return 0;
}
