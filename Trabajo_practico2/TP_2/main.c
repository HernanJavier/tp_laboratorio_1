#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define TAM 20



int main()
{
    char seguir='s';
    int i,espacioLibre,flag,libre, opcion,auxInt;
    ePersona persona[TAM];

    incializarEstado(persona,TAM);

    do
    {


        opcion=mostrarMenu("\nElija una opcion\n1->Agregar persona\n2->Borrar persona\n3->Imprimir lista ordenada por nombre\n4->Imprimir grafico de edades\n5->Salir");
        opcion=validarMenu(opcion);
        switch(opcion)
        {
        case 1:
            agregarPersona(persona,TAM);

            break;
        case 2:
            buscarDni(persona,TAM);

            break;
        case 3:
            imprimirListaOrdenada(persona,TAM);

            break;
        case 4:
            imprimirGrafico(persona,TAM);

            break;
        case 5:
            seguir = 'n';
            break;
        }
    }
    while(seguir=='s');

    return 0;
}
