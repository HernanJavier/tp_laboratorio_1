#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    float num1;
    float num2;
    float result;
    int opcion=0;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando <%.2f>\n",num1);
        printf("2- Ingresar 2do operando <%.2f>\n",num2);
        printf("3- Calcular la suma\n");
        printf("4- Calcular la resta\n");
        printf("5- Calcular la division\n");
        printf("6- Calcular la multiplicacion\n");
        printf("7- Calcular el factorial\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);
        opcion=validarSwitch(opcion);

        switch(opcion)
        {
            case 1:
             printf("Ingrese el Primer numero:\n");
             scanf("%f",&num1);

                break;
            case 2:
                printf("Ingrese el Segundo numero:\n");
                scanf("%f",&num2);
                break;
            case 3:
                result=sumar(num1,num2);
                printf("La suma de %f+%f es :%f",num1,num2,result);
                printf("\n");
                system("pause");
                break;
            case 4:
                result=restar(num1,num2);
                printf("La resta de %f-%f es : %f",num1,num2,result);
                printf("\n");
                system("pause");
                break;
            case 5:
                while(num2==0){
                 printf("No se puede dividir por 0,reingrese divisor:");
                 scanf("%f",&num2);
                }
                result=dividir(num1,num2);
                printf("La division de %f/%f es : %f",num1,num2,result);
                printf("\n");
                system("pause");
                break;
            case 6:
                result=multiplicar(num1,num2);
                printf("La multiplicacion de %f*%f es : %f",num1,num2,result);
                printf("\n");
                system("pause");
                break;
            case 7:
                while(num1-(int)num1!=.00 || num1<0 || num1>12){
                  printf("Error, debe ingresar un numero que se entero/positivo:");
                  scanf("%f",&num1);

                }
                result=factorizar(num1);
                printf("El factor de <%.f> es : %.f",num1,result);
                printf("\n");
                system("pause");
                break;
            case 8:
                printf("La suma de %.2f+%.2f es: %.3f",num1,num2,sumar(num1,num2));
                printf("\n");
                printf("La resta de %.2f-%.2f es: %.3f",num1,num2,restar(num1,num2));
                printf("\n");

                printf("La multiplicacion de %.2f*%.2f es: %.3f",num1,num2,multiplicar(num1,num2));
                printf("\n");
                while(num1-(int)num1!=.00 || num1<0 || num1>12){
                  printf("Error, debe ingresar un numero que se entero/positivo:");
                  scanf("%f",&num1);

                }
                result=factorizar(num1);
                printf("El factor de <%.f> es : %.f",num1,result);
                printf("\n");
                 while(num2==0){
                 printf("No se puede dividir por 0,reingrese divisor:");
                 scanf("%f",&num2);
                }
                result=dividir(num1,num2);
                printf("La division de %f/%f es : %f",num1,num2,dividir(num1,num2));
                printf("\n");
                system("pause");
                break;
            case 9:
                seguir = 'n';
                break;

        }
system("cls");
    }
    return 0;
}
