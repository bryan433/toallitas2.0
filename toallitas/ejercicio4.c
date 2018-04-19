//inicio del programa//
//declaramos variables//
//ingresamos un valor para la base//
//ingresamos un valor para la altura//
//calculamos la superficie//
//calculamos el perimetro//
//imprimimos la superficie//
//imrpimimos el perimetro//
//fin del programa//
//adios//

#include <stdio.h>

int main()
{
	float base,altura,superficie,perimetro;
	printf ("ingrese un valor para la base:\n");
	scanf ("%f", &base);
	printf ("ingrese un valor para la altura\n");
	scanf ("%f", &altura);
	superficie= base*altura;
	perimetro= 2*(base+altura);
	printf ("la superficie es: %f\n", superficie);
	printf ("el perimetro es: %f\n", perimetro);
	return 0;
}
