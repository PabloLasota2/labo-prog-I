#include <stdio.h>
#include <stdlib.h>
#define CANT 5

//peir 5 nums y mostrar promedio

int main()
{
    int numeros[5];
    int acum = 0;
    float promedio = 0;
    for(int i = 0; i < CANT; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
        acum = acum + numeros[i];
    }

    promedio = acum / 5;

    printf("El promedio es: %f", promedio);



    return 0;
}
