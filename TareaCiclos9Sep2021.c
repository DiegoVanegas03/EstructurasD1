#include <stdio.h>
#include <stdlib.h>

int PedirVariables(int *val1, int *val2);
int ciclofor(int valor1, int valor2);
int cicloWhile(int valor1,int valor2);
int cicloDoWhile(int valor1, int valor2);


int main()
{
    int op1,op2, menu;
    char resp='s';

    do
    {
        system("cls");
        do
        {
            system("cls");
            PedirVariables(&op1, &op2);
        } while (op2<op1);
        
        
        printf("\n");
        printf("*******M E N U***********\n");
        printf("     CicloFor       (1)\n");
        printf("   CicloWhile       (2)\n");
        printf("   CicloDoWhile     (3)\n");
        printf("\n*************************");
        printf("\n");
        printf("Eliga con que ciclo se desea hacer: ");
        scanf("%d",&menu);
        printf("\n*************************\n");

        switch (menu)
        {
        case 1:
            ciclofor(op1,op2);
            break;

        case 2:
            cicloWhile(op1,op2);
            break;

        case 3:
            cicloDoWhile(op1,op2);
            break;
    
        default:
            printf("\n");
            printf("Lo siento lo que elegiste no esta en el menu");
            printf("\n");
            break;
        }
        printf("\n*************************");
        printf("\n");
        printf("\nDesea Intentar de nuevo");
        printf("\ns=si y n=no");
        printf("\n");
        scanf("%s",&resp);
        printf("\n");

    }while (resp=='s');
    
    


    system("pause");
    return(0);
}

int PedirVariables(int *val1, int *val2)
{
    int op1,op2;
    printf("RECUERDA PONER EL PRIMER DIGITO MENOR AL SEGUNDO, SI NO NO AVANZAS\n");
    printf("\n");
    printf("Digite desde que numero es: ");
    scanf("%d", &op1);
    printf("Digite hasta cual numero es: ");
    scanf("%d", &op2);
    *val1=op1;
    *val2=op2;

}

int ciclofor(int valor1, int valor2)
{
    for (int i = valor1; i <= valor2-2; i++)
    {
        valor1= valor1+1;
        printf(" %d, ",valor1);
    }
}

int cicloWhile(int valor1,int valor2)
{
    int i=0, x;
    x=valor1+1;
    while (i != valor2-x)
    {
        i=i+1;
        valor1=valor1 + 1;
        printf(" %d, ",valor1);
    }
    
}

int cicloDoWhile(int valor1, int valor2)
{
    int i=0, x;
    x= valor1+1;
    do
    {
        i=i+1;
        valor1=valor1 + 1;
        printf(" %d, ",valor1);

    } while (i != valor2-x);
    
}