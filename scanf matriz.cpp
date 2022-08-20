#include <stdio.h>

int main(void){
	int m[3][3], c, l;
	
	printf("Digite os elementos da matriz...\n");
	
	//loop que vai adicionar valores na matriz
	for(l = 0; l < 3; ++l){//for referente a linha da matriz
		for(c = 0; c < 3; ++c){//for referente a coluna da matriz
			printf("\nDigite um valor para linha %i coluna %i: ", l, c);
			scanf("%i",&m[l][c]);		
		}
	}
	printf("\n\n************Saida de dados em forma da matriz*****************\n\n");
	
	//loop que vai percorrer a matriz e mostrar na forma de matriz
	for ( l = 0; l < 3; ++l){
		for( c = 0; c < 3; ++c){
			printf("%i ",m[l][c]);
		}
		printf("\n");
	}
	
	
	printf("\n\n************Saida de dados em elemento por elemento*****************\n\n");
	
	//loop que vai percorrer a matriz elemento por elemento
	for (int l = 0; l < 3; ++l){
		for(int c = 0; c < 3; ++c){
			printf("\nElemento[%i][%i] = %i ",l,c,m[l][c]);
			}
		}
		
	
}
