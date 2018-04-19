//inicio del programa//
//declaramos nuestras variables//
//ingresamos la cantidad de dias//
//calculamos la cantidad de segundos por dia//
//imprimimos la cantidad de segundos//
//fin del programa//
//adios//


#include <stdio.h>

int main()
{
int dias, segundos;
printf ("ingrese la cantidad de dias:\n");
scanf ("%d", &dias);
segundos= dias*86400;
printf ("la cantidad de dias equivalen: %d segundos\n", segundos);
return 0;
}
