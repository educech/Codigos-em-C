#include <stdio.h>

int main(){
	
	//leia tr�s valores para as vari�veis A, B e C 
	int A, B, C;
	printf("Digite 3 valores para A, B e C respectivamente\n ");
	scanf("%i %i %i",&A, &B, &C);
	
	/*efetue a troca dos valores de forma que a vari�vel A passe a possuir o valor da vari�vel B,
	 a vari�vel B passe a possuir o valor da vari�vel C e a vari�vel C passe a possuir o valor da vari�vel A.
	Apresente os valores trocados no final.*/
	int VA = B, VC = A;
	A = VA;
	B = C;
	C = VC;
	
	//Apresente os valores trocados no final.
	printf("O valor de A e %i\n", A);
	printf("O valor de B e %i\n", B );
	printf("O valor de C e %i\n", C);
	
	return 0;
}
