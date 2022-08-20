#include <stdio.h>

int main(void){
	
	//quantidade atual em estoque
	int qtd_atual;
	printf("Digite a quantidade atual em estoque: ");
	scanf("%i",&qtd_atual);
	
	//quantidade m�xima em estoque
	int qtd_maxima;
	printf("Digite a quantidade maxima em estoque: ");
	scanf("%i",&qtd_maxima);
	
	//quantidade m�nima em estoque
	int qtd_minima;
	printf("Digite a quantidade minima em estoque: ");
	scanf("%i",&qtd_minima);
	
	//quantidade m�dia ((quantidade m�dia = quantidade m�xima + quantidade m�nima)/2).
	int qtd_media = (qtd_maxima + qtd_minima)/2;
	printf("Quantidade media = %i\n",qtd_media);
	
	//Se a quantidade em estoque for maior ou igual a quantidade m�dia escrever a mensagem 'N�o efetuar compra',
	if (qtd_atual >= qtd_media){
		printf("NAO EFETUAR COMPRA!!");
	}
	// sen�o escrever a mensagem 'Efetuar compra'
	else{
		printf("EFETUAR COMPRA!!");	
	}
	
	
	
	
	return 0;
}
