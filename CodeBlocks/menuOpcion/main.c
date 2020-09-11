#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <ctype.h>

int main()
{
    char opcion;
    int seguir = 1;
    char confirma;
    int flagSaludo = 0;
    int flagBrindis = 0;

    do
    {

        system("cls");
        printf("*** Menu de Opciones ***\n\n"
               "a Saludar\n"
               "b Brindar\n"
               "c Despedirse\n"
               "d Salir\n\n");
        printf("Ingrese uns opcion: ");
        __fpurge(stdin);
        opcion = getchar();
        opcion = tolower(opcion);
        //system("read -p 'Press Enter to continue...' var");
        switch(opcion)
        {
        case 'a':
            system("clear");
            printf("Hola, como andas?\n");
            system("read -p 'Press Enter to continue...' var");
            flagSaludo = 1;
            break;
        case 'b':
            system("clear");
            if(flagSaludo != 1)
            {
                printf("Para brindar primero hay que saludar!\n");
                system("read -p 'Press Enter to continue...' var");
            }
            else
            {
                printf("Chin chin!\n");
                system("read -p 'Press Enter to continue...' var");
                flagBrindis = 1;
            }
            break;
        case 'c':
            system("clear");
            if(flagSaludo != 1)
            {
                printf("Antes de despedirnos, hay que saludarnos\n");
                system("read -p 'Press Enter to continue...' var");
            }
            else if(flagBrindis != 1 && flagSaludo == 1)
            {
                printf("Antes de depedirnos, brindemos!\n");
                system("read -p 'Press Enter to continue...' var");
            }
            else if(flagBrindis == 1 && flagSaludo == 1)
            {
                printf("Chau, nos vemos!\n");
                system("read -p 'Press Enter to continue...' var");
            }
            break;
        case 'd':
            system("clear");
            printf("Esta seguro que desea salir?(s/n)\n");
            __fpurge(stdin);
            confirma = getchar();
            confirma = tolower(confirma);
            if(confirma == 's')
            {
                seguir = 0;
            }
            else
            {
                flagBrindis = 0;
                flagSaludo = 0;
                seguir = 1;
            }
            break;
        default:
            system("clear");
            printf("%c no es una opcion intene nuevamente\n",opcion);
            system("read -p 'Press Enter to continue...' var");
            seguir = 1;
        }
    }
    while(seguir);

    return 0;
}
