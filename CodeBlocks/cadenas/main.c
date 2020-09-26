#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_VEC 3
#define CANT_CARAC 20

int main()
{
    char nombres[TAM_VEC][CANT_CARAC];
    //char auxNombre[CANT_CARAC];

    for(int i = 0; i < TAM_VEC; i++)
    {
        printf("Nombre: ");
        fflush(stdin);
        gets(nombres[i]);
    }

    for(int i = 0; i < TAM_VEC; i++)
    {
        printf("\n%s",nombres[i]);
    }


    return 0;
}
