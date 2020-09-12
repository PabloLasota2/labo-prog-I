#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[5];

    //Carga secuencial

    for(int i = 0; i < 5; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
    }

    //Lectura secuencial

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", numeros[i]);
    }

    //Lectura secuencial (inversa)

    for(int i = 4; i >= 0; i--)
    {
        printf("%d ", numeros[i]);
    }

    return 0;
}
