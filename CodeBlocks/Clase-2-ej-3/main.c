#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio_ext.h>

#define CANT_PERSONAS 5

int main()
{
    char sexo;
    char inicialNombre;
    char inicialMaxTempF;
    float maxTempF = 0;
    float temperatura;
    int edad = 0;
    int acumSexoM = 0;
    int acumSexoF = 0;
    int acumEdad = 0;
    int promedioEdad = 0;

    for(int i = 0; i < CANT_PERSONAS; i++)
    {
        printf("Ingrese la inicial de su nombre:"); //Inicial del nombre
        __fpurge(stdin);
        scanf("%c",&inicialNombre);
        inicialNombre = toupper(inicialNombre);

        printf("Ingrese su temperatura actual(34 - 45):"); //Temperatura Actual
        __fpurge(stdin);
        scanf("%.2f",&temperatura);
        while(temperatura < 34 || temperatura > 45)
        {
            printf("Temperatura erronea. Ingrese nuevamente:"); //Temperatura Error
            __fpurge(stdin);
            scanf("%.2f",&temperatura);
        }

        printf("Ingrese sexo(f - m):"); //Sexo
        __fpurge(stdin);
        scanf("%c",&sexo);
        sexo = toupper(sexo);
        while(sexo != 'F' && sexo != 'M')
        {
            printf("Sexo no valido. Ingrese nuevamente(f - m):");//Sexo error
            __fpurge(stdin);
            scanf("%c",&sexo);
            sexo = toupper(sexo);
        }

        printf("Ingrese su edad(20 - 65):");//Edad
        __fpurge(stdin);
        scanf("%d",&edad);
        while(edad < 20 || edad > 65)
        {
            printf("Edad no valida. Ingrese nuevamente(20 - 65):");//Edad Error
            __fpurge(stdin);
            scanf("%d",&edad);
        }
        acumEdad = acumEdad + edad;


        if(sexo == 'F')
        {
            acumSexoF++;
            if(temperatura > maxTempF)
            {
                maxTempF = temperatura;
                inicialMaxTempF = inicialNombre;
            }

        }
        if(sexo == 'M')
        {
            acumSexoM++;
        }
        system("clear");

        if(i == CANT_PERSONAS-1)
        {
            promedioEdad = acumEdad / CANT_PERSONAS;
        }
    }

    printf("La cantidad de personas sexo F es de: %d y las del sexo M es de: %d\n", acumSexoF, acumSexoM);
    printf("La edad promedio de las %d personas es de: %d\n", CANT_PERSONAS, promedioEdad);
    printf("La inicial de la mujer con mas temperatura(%.2f) es %c\n", maxTempF, inicialMaxTempF);

    return 0;
}
