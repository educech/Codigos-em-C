#include <stdio.h>


int main() { 
  char nome1[30], nome2[30];
  float altura1, altura2;
  
    printf("Infome o nome da primeira pessoa: ");
    scanf ("%s", &nome1);
    
   printf("Informe a sua altura: ");
     scanf("%f", &altura1);
     
  printf("/nInfome o nome da segunda pessoa: ");
    scanf ("%s", &nome2);
    
   printf("Informe a sua altura: ");
     scanf("%f", &altura2);


   if (altura1 < altura2 ) {
     printf ("o mais baixo e %s com %f de altura",nome1, altura1);       
   }
  else if ( altura2 < altura1){
  	printf ("o mais baixo e %s com %f de altura",nome2, altura2);
  }

  
}
