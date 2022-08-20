#include <stdio.h>

int main(void){
	
	//quantidade atual em estoque
	int qtd_atual;
	printf("Digite a quantidade atual em estoque: ");
	scanf("%i",&qtd_atual);
	
	//quantidade máxima em estoque
	int qtd_maxima;
	printf("Digite a quantidade maxima em estoque: ");
	scanf("%i",&qtd_maxima);
	
	//quantidade mínima em estoque
	int qtd_minima;
	printf("Digite a quantidade minima em estoque: ");
	scanf("%i",&qtd_minima);
	
	//quantidade média ((quantidade média = quantidade máxima + quantidade mínima)/2).
	int qtd_media = (qtd_maxima + qtd_minima)/2;
	printf("Quantidade media = %i\n",qtd_media);
	
	//Se a quantidade em estoque for maior ou igual a quantidade média escrever a mensagem 'Não efetuar compra',
	if (qtd_atual >= qtd_media){
		printf("NAO EFETUAR COMPRA!!");
	}
	// senão escrever a mensagem 'Efetuar compra'
	else{
		printf("EFETUAR COMPRA!!");	
	}
	
	
	
	
	return 0;
}
