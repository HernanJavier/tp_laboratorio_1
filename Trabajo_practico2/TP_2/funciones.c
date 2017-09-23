#include <stdio.h>
#include "funciones.h"
#include <string.h>

void clean()
{

    system("cls");
    system("pause");

}

int mostrarMenu( char texto [])
{

    int opcion;
    printf("%s", texto);
    scanf("%d",&opcion);

    return opcion;
}

int validarMenu(int opcion)
{

    while(opcion<0 || opcion>5)
    {

        printf("Opcion incorrecta, reingrese opcion:\n");
        scanf("%d",&opcion);
    }
    return opcion;

}

void incializarEstado(ePersona lista [],int tam)
{

    int i;
    for(i=0; i<tam; i++)
    {

        lista[i].estado=0;

    }

}

int validarCadena(char nombre[])
{
    int i;

    for(i=0; i<strlen(nombre); i++)
    {

        if(isdigit(nombre[i]))
        {
            printf("Error,debe ingresar solo caracteres\n");
            return 0;
        }
    }
    return 1;

}
int validarEdad(char digitos[])
{
    int i;
    int auxEdad;
    for(i=0; i<strlen(digitos); i++)
    {

        if(isalpha(digitos[i]))
        {

            printf("Dato incorrecto,debe ingresar solo numeros\n");
            return 0;

        }

    }
    auxEdad=atoi(digitos);

    if(auxEdad<0 || auxEdad>100)
    {

        printf("Error,Debe ingresar una edad entre 0 y 120\n");
        return 0;
    }

    return 1;
}

int validarDni(char digitos[])
{
    int i,auxDni;

    for(i=0; i<strlen(digitos); i++)
    {

        if(isalpha(digitos[i]))
        {

            printf("Dato incorrecto,debe ingresar solo numeros\n");
            return 0;

        }

    }

    if(strlen(digitos)!=8)
    {

        printf("\nDNI incorrecto<Debe ingresar solo 8 digitos>:\n");
        return 0;

    }

    return 1;
}


void agregarPersona(ePersona lista [], int tam)
{



    char auxNombre[20],auxDigitos[20];


    int i, flag=0;

    for(i=0; i<tam; i++)
    {

        if(lista[i].estado==0)
        {

            do
            {
                printf("\nIngrese nombre:\n");
                fflush(stdin);
                gets(auxNombre);

            }
            while(validarCadena(auxNombre)==0);

            strcpy(lista[i].nombre,auxNombre);

            do
            {
                printf("\nIngrese edad(<0-120>):\n");
                fflush(stdin);
                gets(auxDigitos);
            }
            while(validarEdad(auxDigitos)==0);
            lista[i].edad=atoi(auxDigitos);

            do
            {

                printf("\nIngrese DNI:\n");
                fflush(stdin);
                gets(auxDigitos);

            }
            while(validarDni(auxDigitos)==0);

            lista[i].dni=atoi(auxDigitos);

            lista[i].estado=1;
            flag=1;
            printf("Dato cargado con exito!\n");
            system("pause");
            break;
        }

    }
    if(flag==0)
    {

        printf("Espacio lleno!\n");
        system("pause");
    }


}

void buscarDni(ePersona lista[],int tam)
{

    int i,auxInt,flag=0;
    char rta;
    printf("Seleccione DNI:\n");
    scanf("%d",&auxInt);

    for(i=0; i<tam; i++)
    {

        if(lista[i].dni==auxInt)
        {


            printf("Esta seguro que desea dar de baja?--->s|n <-----\n");
            rta=getche();
            if(rta=='s')
            {

                lista[i].estado=0;
                printf("Se ha eliminado con exito\n");
                system("pause");
                flag=1;

            }

        }


    }
    if(flag==0)
    {
        printf("DNI incorrecto");
        system("pause");

    }


}



void imprimirListaOrdenada(ePersona lista[],int tam)
{

    int i,j;
    ePersona auxPersona;

    for(i=0; i<tam-1; i++)
    {

        for(j=i+1; j<tam; j++)
        {
            if(strcmp(lista[i].nombre,lista[j].nombre)>0)
            {

                auxPersona=lista[i];
                lista[i]=lista[j];
                lista[j]=auxPersona;

            }

        }
    }

    for(i=0; i<tam; i++)
    {

        if(lista[i].estado==1)
        {
            printf("\n%s----%d----%d\n",lista[i].nombre,lista[i].edad,lista[i].dni);

        }

    }




}

void imprimirGrafico(ePersona lista[], int tam)
{

    int i,menoresDe18=0,de19a35=0,mayoresA35=0,flag=0,sumaTotal;




    for(i=0; i<tam; i++)
    {

        if(lista[i].estado==1)
        {

            if(lista[i].edad<19)
            {
                menoresDe18++;
            }
            else if(lista[i].edad>=19 && lista[i].edad<=35)
            {
                de19a35++;

            }
            else
            {
                mayoresA35++;
            }

        }



    }
    sumaTotal=menoresDe18+de19a35+mayoresA35;


    for(i=sumaTotal; i>0; i--)
    {
        printf("\t");

        if(menoresDe18==i)
        {

            printf("%c",223);
            menoresDe18--;


        }
        printf("\t\t");


        if(de19a35==i)
        {
            printf("%c",223);
            de19a35--;
        }
        printf("\t    ");


        if(mayoresA35==i)
        {

            printf("%c",223);
            mayoresA35--;

        }
        flag=1;
        printf("\n");
    }
    if(flag==0){
       printf("No se ha introducido datos/no existe grafico");
    }



    printf("\n");
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",218,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,191);
    printf("\n%cMenores a 18%c Entre 19 y 35 %c Mayores a 35%c",179,179,179,179);
    printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",192,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,217);
}


