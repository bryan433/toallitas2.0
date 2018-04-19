//inicio del programa//
//declaramos nuestras variables//
//damos la cantidad de galones que necesitamos//
//dejamos en claro cuantos litros tiene cada galon//
//calculamos la cantidad de gasolina que vamos a llevar//
//imprimimos la cantidad de gasolina//
//calculamos el precio de lo que nos va a salir toda esa gasolina//
//imprimos el precio//
//fin del programa//
//adios


#include <stdio.h>

int main()
{
float galones,gasolina,precio;
printf ("ingrese la cantidad de galones que desea comprar:\n");
scanf ("%f", &galones);
galones= 3785L;
gasolina= galones*3785;
printf ("la cantidad de gasolina que usted compro es equivalente a: %.1f\n", gasolina);
precio= gasolina*820;
printf ("el precio de lo que usted compro es: %.1f", precio);
return 0;
}
