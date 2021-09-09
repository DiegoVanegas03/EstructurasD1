#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escriba un programa en C que pida dos números enteros y le muestre las siguientes opciones al usuario:

    2.  Escriba el mismo programa solicitando números flotantes.
*/

int main()
{
    int menu, raiz,datoEnt1, datoEnt2,resEnt;
    float dato1,dato2 ,res ,raiz1,raiz2;
    datoEnt1= dato1;
    datoEnt2= dato2;
    char nvm = 's' ;


    do
    {
        system("cls"); 
        printf("Dame el primer digito: ");
        scanf("%f",&dato1);
        printf("Dame el segundo digito: ");
        scanf("%f",&dato2);

        printf("\n");
        printf("Digite el numero segun lo que se desee hacer\n");
        printf("\n");
        printf("Suma           (1)\n");
        printf("Resta          (2)\n");
        printf("Multiplicacion (3)\n");
        printf("Division       (4)\n");
        printf("Potencia       (5)\n");
        printf("Modulo         (6)\n");
        printf("Raiz cuadrada  (7)\n");
        printf("\n Seleccion: ");
        scanf("%d",&menu);
        
        printf("**********Resultado**********\n");
        switch (menu)
        {
        case 1:
            res = dato1 + dato2;
            printf("La suma de %.2f y %.2f es %.2f", dato1, dato2, res);
            break;
        case 2:
            res= dato1 - dato2;
            printf("La resta de %.2f y %.2f da %.2f", dato1, dato2, res);
            break;
        case 3:
            res= dato1 * dato2;
            printf("La Multiplicacion de %.2f y %.2f da %.2f", dato1, dato2, res);
             break;
        case 4:
            res= dato1 / dato2;
            printf("La Division de %.2f y %.2f da %.2f", dato1, dato2, res);
            break;
        case 5:
            res= pow(dato1,dato2);
            printf("La potencia  de %.2f elevado a %.2f da %.2f", dato1, dato2, res);
            break;
        case 6:
            resEnt= datoEnt1 % datoEnt2;
            printf("El modulo de %d y %d da %d", dato1, dato2, resEnt);
            break;
        case 7:
            raiz1= sqrt(dato1);
            raiz2= sqrt(dato2);
            printf("La raiz de %.2f es %.2f y la raiz de %.2f es %.2f", dato1, raiz1, dato2, raiz2);
            break;
        default:
            printf("No selecciono ninguna opcion del menu");
            break;
        }
        printf("\n");
        printf("*****************************");
        printf("\nDeseas hacer otra operacion?");
        printf("\nDigite s=si y n=no");
        printf("\nSeleccion: ");
        scanf("%s",&nvm);
        printf("****************************\n");
    } while (nvm == 's');
    

    system("pause");
    return(0);

}