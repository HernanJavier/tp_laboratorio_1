#include "funciones.h"
int validarSwitch(int opcion){
while (opcion<1 || opcion>9){
 printf("Error,Reingrese opcion:\n");
 scanf("%d",&opcion);
 }
 return opcion;

}


float sumar(float x,float y){

float resultado;
resultado=x+y;
return resultado;
}

float restar(float x,float y){

float resultado;
resultado=x-y;
return resultado;
}
float dividir(float x, float y){
 float resultado;
 resultado=x/y;
 return resultado;

}
float multiplicar(float x,float y){
 float resultado;

 resultado=x*y;
 return resultado;

}

int factorizar(int x){

float acum=1;
int n;
for(n=1;n<=x;n++){
    acum=acum*n;

}

return acum;
}




