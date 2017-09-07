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
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
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
                system("pause");
                break;
            case 8:
                result=sumar(num1,num2);
                printf("La suma de %f+%f es :%f",num1,num2,result);
                printf("\n");
                result=restar(num1,num2);
                printf("La resta de %f-%f es : %f",num1,num2,result);
                printf("\n");

                result=multiplicar(num1,num2);
                printf("La multiplicacion de %f*%f es : %f",num1,num2,result);
                printf("\n");
                while(num1-(int)num1!=.00 || num1<0 || num1>12){
                  printf("Error, debe ingresar un numero que se entero/positivo:");
                  scanf("%f",&num1);

                }
                result=factorizar(num1);
                printf("El factor de <%.f> es : %.f",num1,result);
                printf("\n");
                while(num2==0){
                 printf("No se puede dividir por 0,reingrese divisor:\n");
                 scanf("%f",&num2);
                }
                result=dividir(num1,num2);
                printf("La division de %f/%f es : %f",num1,num2,result);
                printf("\n");
                system("pause");

            case 9:
                seguir = 'n';
                break;
        }
system("cls");
    }
    return 0;
}
