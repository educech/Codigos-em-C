#include <stdio.h>
#include <stdlib.h>
int main()
{
    int l, c, cont, matriz[4][4];
    int valor;
    cont = 0;
    valor = 0;
    for (l = 0; l < 4; l++)
    {
        for (c = 0; c < 2; c++)
        {
            matriz[l][c] = cont + 1;

        }
    }

    for (l = 0; l < 4; l++)
    {
        for (c = 0; c < 2; c++)
        {
            valor = valor + matriz[l][c];
            printf("Linha: %d   Coluna: %d  Valor: %d", l, c, valor);
        }
        printf("\n");
    }
    return (0);
}
