#include <stdio.h>
#include <string.h>

int main(){
	char palavra[30];	
	int qtdletras, vogais = 0, consoantes = 0;
	
	printf("Digite uma palavra: ");
	scanf("%s",&palavra);
	
	qtdletras = strlen(palavra);
	
	for(int i = 0; i < qtdletras; i++){
		switch(palavra[i]){
			case 'A':
			case 'a':
			case 'E':
			case 'e':
			case 'I':
			case 'i':
			case 'O':
			case 'o':
			case 'U':
			case 'u':
				vogais++;
				break;
			default:
				consoantes++;
			
		}
	}
	
printf("Vogais = %i\n",vogais);
printf("Consoantes = %i\n",consoantes);
	
	
	
	
	return 0;
}
