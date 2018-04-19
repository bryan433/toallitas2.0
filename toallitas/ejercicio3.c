//inicio del programa//
//declaramos nuestras variables//
//ingresamoe el valor para el cateto1//
//ingresamos el valor del cateto2//
//calculamos la hipotenusa//
//imprimimos la hipotenusa//
//fin del programa//
//adios//



#include <stdio.h>

int main()
{
	float cateto1,cateto2,hipotenusa;
	printf ("ingrese el valor del cateto1:\n");
	scanf ("%f", &cateto1);
	printf ("ingrese el valor del cateto2:\n");
	scanf ("%f", &cateto2);
	hipotenusa= (cateto2*cateto2)+(cateto1*cateto1);
	hipotenusa= hipotenusa*hipotenusa;
	printf ("la hipotenusa es: expresada en raiz %f\n", hipotenusa);
	return 0;
}
