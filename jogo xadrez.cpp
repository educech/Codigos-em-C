#include <stdio.h>

int main(void){
	
	// hora de in�cio 
	int h_inicio;
	printf("Digite a hora de inicio do jogo: ");
	scanf("%i",&h_inicio);
	
	// hora de fim 
	int h_fim;
	printf("Digite a hora do fim do jogo: ");
	scanf("%i",&h_fim);
	
	//dura��o do jogo em horas
	int duracao;
	if (h_inicio > h_fim){
		duracao = h_inicio - h_fim;
		printf("O jogo durou %i horas",duracao);
	}else if (h_fim > h_inicio){
		duracao = h_fim - h_inicio;
		printf("O jogo durou %i horas",duracao);
	}else{
		printf("O jogo durou 24 horas");
	}
	
	return 0;
}
