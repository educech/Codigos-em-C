#include <stdio.h>

int main(void){
	
	//Ler um vetor de até 10 elementos.
	int vet[10], i, soma; 

	printf("DIGITE ZERO OU UM NUMERO NEGATIVO PARA SAIR....\n\n ");
	for(i = 0; i < 10; i++){
		printf("Digite o %i numero: ",i + 1);
		scanf("%i",&vet[i]);
		
		//leitura deverá ser executada até que o vetor fique totalmente preenchido ou seja informado um valor negativo ou zero
		if (vet[i] < 0 || vet[i] == 0){
			break;
		}

		//Calcular a soma dos valores maiores que 5 existentes no vetor.
		if (vet[i] > 5){
			soma += vet[i];
		}
	}
		
	// imprimindo lista
	for (i = 0; i < 10 ; i++){
			printf("%i\n", vet[i]);
		}
		
	//imprimir a soma dos valores maiores que 5 existentes no vetor.
	printf ("\nSoma dos valores maiores que 5 = %i ",soma - 1);
	
	

	
}
