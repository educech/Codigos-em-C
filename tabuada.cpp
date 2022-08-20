#include <stdio.h>

int main(void){
	
	// leia um número Inteiro 
	int n;
	printf("Digite um numero para ver sua tabuada: ");
	scanf("%i",&n);
	//mostre na tela a sua tabuada
	for (int i = 0; i <= 9; i++){
		printf("%i * %i = %i \n",n,i,n*i);
	}
		
	return 0;
}
