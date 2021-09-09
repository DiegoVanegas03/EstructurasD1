#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escriba un programa en C que pida dos números enteros y le muestre las siguientes opciones al usuario:

    Suma
    Resta
    Multiplicación
    División
    Potencia
    Modulo
    Raíz cuadrada 

    El programa deberá hacer el calculo que eligió el usuario y mostrarlo en pantalla. 
    En el caso de la raíz cuadrada deberá mostrar la raíz de los dos números.  
    Después deberá preguntarle al usuario si desea continuar o no. 
    En caso de continuar deberá volver a pedir dos números y mostrar las opciones mientras el usuario diga que desea continuar.
*/

int main()
{
    int dato1,dato2,res,menu, raiz;
    char nvm = 's' ;


    do
    {
        system("cls"); 
        printf("Dame el primer digito: ");
        scanf("%d",&dato1);
        printf("Dame el segundo digito: ");
        scanf("%d",&dato2);

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
            printf("La suma de %d y %d es %d", dato1, dato2, res);
            break;
        case 2:
            res= dato1 - dato2;
            printf("La resta de %d y %d da %d", dato1, dato2, res);
            break;
        case 3:
            res= dato1 * dato2;
            printf("La Multiplicacion de %d y %d da %d", dato1, dato2, res);
             break;
        case 4:
            res= dato1 / dato2;
            printf("La Division de %d y %d da %d", dato1, dato2, res);
            break;
        case 5:
            res= pow(dato1,dato2);
            printf("La potencia  de %d elevado a %d da %d", dato1, dato2, res);
            break;
        case 6:
            res= dato1 % dato2;
            printf("El modulo de %d y %d da %d", dato1, dato2, res);
            break;
        case 7:
            res= sqrt(dato1);
            raiz= sqrt(dato2);
            printf("La raiz de %d es %d y la raiz de %d es %d", dato1, res, dato2, raiz);
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