#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1 = 0;
    float num2 = 0;
    float resSuma = 0;
    float res = 0;

    printf("Ingrese el primer numero:");
    scanf("%f",&num1);
    printf("Ingrese el segundo numero:");
    __fpurge(stdin);
    scanf("%f",&num2);

    resSuma = num1 + num2;
    res = resSuma / 2;

    printf("El la suma es %.2f\n", resSuma);

    printf("El promedio de esos 2 numeros es %.2f", res);


    return 0;
}
