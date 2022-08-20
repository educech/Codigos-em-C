#include <stdio.h>

int main(void){
	
	//leia as idades de 7 homens e de 7 mulheres.
	int H, M, i, Hvelho = 0, Mvelha = 0, Hnovo = 1000;
	
	for (i = 1; i <= 7; i++){
		printf("Digite a idade do %i homen: ", i );
		scanf("%i",&H);
		
		if(H > Hvelho ){
			Hvelho = H;
		}
		if (H < Hnovo){
			Hnovo = H;
		}
	}
	
	printf("\n***********************************\n");
	// leia as idades de 7 mulheres.
	for (i = 1; i <= 7; i++){
		printf("Digite a idade da %i mulher: ", i );
		scanf("%i",&M);	
		if(M > Mvelha){
			Mvelha = M;
		}
	}
	
	//a soma das idades do homem mais velho com a mulher mais velha,
	printf("O homen mais velho tem %i, a mulher mais velha tem %i, a soma das idades e %i ",Hvelho, Mvelha, Hvelho + Mvelha);
	//e o produto das idades do homem mais novo com a mulher mais velha.
	printf("\nO homen mais novo tem %i, a mulher mais velha tem %i, o produto das idades e %i ",Hnovo, Mvelha, Hnovo * Mvelha);
	
	
	
	
	
}
