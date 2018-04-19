//inicio del programa//
//declaramos nuestras variables//
//decidimos un valor para nuestra variable numero//
//calculamos el cuadrado de ese numero//
//calculamos el cubo de ese numero//
//imprimimos el cuadrado del numero//
//imprimimos el cubo del numero//
//fin del programa//
//adios//

#include <stdio.h>

int main()
{
	int cuadrado,cubo,numero;
	printf ("ingrese un numero:\n");
	scanf ("%d", &numero);
	cuadrado= numero*numero;
	cubo= numero*numero*numero;
	printf ("el cuadrado de un numero es: %d\n", cuadrado);
	printf ("el cubo de un numero es %d\n", cubo);
	return 0;
}
