#include <stdio.h>

int main(void){
	
	//ler um vetor b de 9 elementos
	int b[8], i, x, p;
	for (i = 0; i <= 8; i++){
		printf("elemento %d: ",i);
		scanf("%d",&b[i]);
		
	}
	//um valor X e um valor P que representa um posi��o dentro do vetor (validar o valor P aceitando apenas valores v�lidos: 0 a 8)
	//Incluir o valor X na posi��o P do vetor B fazendo com que os elementos existentes dentro do vetor (da posi��o em diante) sejam deslocados de uma posi��o para o final (Considere que existe espa�o no vetor para o deslocamento)
	//Logo ap�s o processamento escrever o vetor B
	for (i = 0; i <= 8; i++){
		printf("\n%d",b[i]);
	}
	
	
}
