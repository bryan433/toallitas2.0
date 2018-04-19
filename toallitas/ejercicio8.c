//inicio del programa//
//declaramos nuestras variables//
//le damos un valor a x//
//desarrollamos el polinomio que nos dan//
//imprimimos el resultado de nuestro polinomio//
//fin del programa//
//adios//

#include <stdio.h>

int main()
{
int x,polinomio;
printf ("ingrese el valor de x:\n");
scanf ("%d", &x);
polinomio= (x*x*x)+2*(x*x)+3*x+5;
printf ("el valor del polinomio es: %d\n", polinomio);
return 0;
}
