#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Escriba un programa en C que pida dos números enteros y le muestre las siguientes opciones al usuario:
    
    3.  Bonus:  En lugar de números en las opciones lea símbolos (+ suma, - resta, * ó x multiplicación, / división, ^ potencia,
      % módulo, R o r raíz cuadrada) 

*/
int main()
{
    int dato1,dato2,res, raiz;
    char nvm = 's',menu ;


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
        printf("Suma           (+)\n");
        printf("Resta          (-)\n");
        printf("Multiplicacion (*)\n");
        printf("Division       (/)\n");
        printf("Potencia       (^)\n");
        printf("Modulo         (m)\n");
        printf("Raiz cuadrada  (r)\n");
        printf("\n Seleccion: ");
        scanf("%s",&menu);
        
        printf("**********Resultado**********\n");
        switch (menu)
        {
        case '+':
            res = dato1 + dato2;
            printf("La suma de %d y %d es %d", dato1, dato2, res);
            break;
        case '-':
            res= dato1 - dato2;
            printf("La resta de %d y %d da %d", dato1, dato2, res);
            break;
        case '*':
            res= dato1 * dato2;
            printf("La Multiplicacion de %d y %d da %d", dato1, dato2, res);
             break;
        case '/':
            res= dato1 / dato2;
            printf("La Division de %d y %d da %d", dato1, dato2, res);
            break;
        case '^':
            res= pow(dato1,dato2);
            printf("La potencia  de %d elevado a %d da %d", dato1, dato2, res);
            break;
        case 'm':
            res= dato1 % dato2;
            printf("El modulo de %d y %d da %d", dato1, dato2, res);
            break;
        case 'r':
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

