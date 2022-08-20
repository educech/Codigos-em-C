#include <stdio.h>

int main(void){
	
	//leia um valor em metros
	float valor;
	printf("Digite um valor em metros: ");
	scanf("%f",&valor);
	// exiba convertido em centímetros e milímetros.
	float cm = valor * 100, mm = valor * 1000;
	printf("%.2fkm em centimetros e %.2fcm e em milimetros e %.2fmm",valor, cm, mm);	
	return 0;
	
}
