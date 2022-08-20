#include <stdio.h>

int main(void){
	
	//qtd itens
	int qtd_i;
	printf("Quantidade de ites comprados: ");
	scanf("%i",&qtd_i);
	
	//total
	float total;
	total = qtd_i * 9.99;
	printf("%i iten(s) comprados custa(m) %fR$ ", qtd_i,total);
	
	return 0;	
}
