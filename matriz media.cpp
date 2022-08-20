#include <stdio.h>

int main(void){
	
	//Desenvolva um algoritmo que implemente uma matriz MAT[4 x 4]
	int l, c;
	float MAT[4][4], media = 0;
	
	for(l = 0; l < 4; l++){
		for(c = 0; c < 4; c++){
			printf("Digite um valor para linha %i coluna %i: ",l,c);
			scanf("%f",&MAT[l][c]);
			media += MAT[l][c];
		}
	}
	//loop que vai percorrer a matriz e mostrar na forma de matriz
	printf("\nElementos da matriz\n");
	for ( l = 0; l < 4; ++l){
		for( c = 0; c < 4; ++c){
			printf("%f ",MAT[l][c]);
		}
		printf("\n");
	}
	//mostrar media
	media = media / 9;
	printf("\nA media da matriz e: %f", media);
	
	
	
}
