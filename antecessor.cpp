#include <stdio.h>

int main(void){
	
	// ler um valor (do teclado) 
	int num;
	printf("Digite um numero: ");
	scanf("%i",&num);
	//escrever (na tela) o seu antecessor.
	int ant = num -1;
	printf("O antecessor de %i e %i",num,ant);
	
	return 0;

}
