#include <stdio.h>

int main(void){
	
	//Defina uma lista chamada valores
	int valores[5];
	
	//preencha 5 posições da lista 
	for(int i = 0; i <= 5; i++){
		printf("Digite o %i valor: ", i+1);
		scanf("%i",&valores[i]);
	}
	//some todos os numeros e divida pela quantidade de valores
	
	for(int i = 0; i <= 5; i++){
		printf("%i\n",valores[i]);
	}
	
	return 0;
}
