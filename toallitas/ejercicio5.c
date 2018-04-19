//inicio del programa//
//declaramos nuestras variables//
//le damos un nombre a nuestro dinosaurio//
//colocamos las libras del dinosaurio//
//el tamaño del dinosaurio expresado en pies//
//calculamos el peso del dinosaurio para pasarlo a kilogramos//
//imprimimos el peso en metros//
//calculamos la longitud para pasarla a metros//
//imprimimos la longitud expresada en metros//
//imprimimos el nombre del dinosaurio//
//fin del programa//
//adios//

#include <stdio.h>

int main()
{
float peso,longitud,pies,libras;
char dinosaurio [50];
printf ("ingrese un nombre para el dinosaurio:\n");
scanf ("%s", &dinosaurio);
printf ("ingrese las libras del dinosaurio:\n");
scanf ("%f", &libras);
printf ("ingrese el tamaño del dinosaurio en pies:\n");
scanf ("%f", &pies);
peso= libras*0.45;
printf ("el peso del dinosaurio es: %.2f kilogramos\n", peso);
longitud= pies*0.3048;
printf ("la longitud del dinosaurio es: %.2f metros\n", longitud);
printf ("el nombre del dinosaurio es : %s\n", dinosaurio);
return 0;
} 
