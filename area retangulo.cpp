#include <stdio.h>
//função
void AreaRetang(float b, float a){
	
	float area = b * a;
	
	printf("A area do retangulo e %f \n", area);

	
}


//programa principal
int main(){
	
	float base, altura;
	printf("Digite a base do retangulo: \n");
	scanf("%f",&base);
	
	printf("Digite a altura do retangulo: \n");
	scanf("%f",&altura);
	
	AreaRetang(base, altura);
	

	
	return 0;
}

