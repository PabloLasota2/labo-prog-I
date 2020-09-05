#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int resSuma = 0;
    int res = 0;

    printf("Ingrese el primer numero:");
    scanf("%d",&num1);
    printf("Ingrese el segundo numero:");
    __fpurge(stdin);
    scanf("%d",&num2);

    resSuma = num1 + num2;
    res = resSuma / 2;

    printf("El la suma es %d\n", resSuma);

    printf("El promedio de esos 2 numeros es %d", res);


    return 0;
}
