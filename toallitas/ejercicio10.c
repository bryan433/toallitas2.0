//inicio del programa//
//declaramos las variables//
//ingresamos la cantidad de kilometros//
//ingresamos el valor por kilometros//
//calculamos el valor del boleto//
//imprimimos el valor del boleto//
//fin del programa//
//adios//


#include <stdio.h>

int main()
{
int valordelboleto,valorporkilometro,kilometros;
printf ("ingrese la cantidad de kilometros recorridos:\n");
scanf ("%d", &kilometros);
printf ("ingrese el valor por kilometros:\n");
scanf ("%d", &valorporkilometro);
valordelboleto= kilometros*valorporkilometro;
printf ("el valor del boleto es: $%d\n", valordelboleto);
return 0;
}
