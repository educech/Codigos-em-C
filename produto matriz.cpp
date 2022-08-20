#include <stdio.h>

int main(void){
	//Desenvolva um algoritmo que implemente uma matriz MAT[5 x 5] 
	int l, c, MAT[3][3], produto;
	
	for(l = 0; l < 3; l++){
		for(c = 0; c < 3; c++){
			printf("Digite um valor para linha %i coluna %i: ",l,c);
			scanf("%i",&MAT[l][c]);

			
		}
	}
	
	//loop que vai percorrer a matriz e mostrar na forma de matriz
	printf("\nElementos da matriz\n");
	for ( l = 0; l < 3; ++l){
		for( c = 0; c < 3; ++c){
			printf("%i ",MAT[l][c]);
		}
		printf("\n");
	}	
			
	// exiba o produto de cada coluna da matriz
	printf("\nProduto das colunas\n");
	for( c = 0; c < 3; ++c){
		produto =* MAT[c];
		printf("\nProduto da coluna %i = %i",c, produto);
	}		
			
}
