#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int res = 0;

    printf("Ingrese el primer numero:");
    scanf("%d",&num1);
    printf("Ingrese el segundo numero:");
    __fpurge(stdin);
    scanf("%d",&num2);

    res = num1 + num2;

    printf("El resultado de la suma es %d", res);

    return 0;
}
