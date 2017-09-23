#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct
{

    char nombre[50];
    char apellido[50];
    int edad;
    int estado;
    int dni;

} ePersona;


/**
*Inicializa todos los estados en 0
* @param lista del array y tamaño
*/
void incializarEstado(ePersona [],int);
/**
*@return  opcion de menu
*
*/
int mostrarMenu(char []);
/**
*dar de alta a persona
*
*/
void agregarPersona(ePersona [], int);

/**
*
*recorre el array y obtiene aquellos con estado 1, realiza un swapping y luego los muestra
*
*@param lista del array y tamaño
*/
void imprimirListaOrdenada(ePersona[],int);
/**
*recorrido de array, deteccion de altas, acumulacion de indices,muestra edades en rango
*
*/
void imprimirGrafico(ePersona [],int);

//VALIDACIONES
int validarMenu(int );
int validarCadena(char[]);
int validarDni(char[]);
int validarEdad(char[]);


/**
 * recorre el array y obtiene Dni existente para poder ser eliminado,cambiando
 *su estado a 0
 * @param lista el array y tamaño
 *
 */
void borrarPersona(ePersona [],int);


#endif // FUNCIONES_H_INCLUDED
