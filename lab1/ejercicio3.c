//inicio del programa//
//declaramos variables en numeros float//
//ingresamos el valor del traje//
//si el valor es mayor a 250000 se efectuara un valor de 15%//
//si el valor es menor o igual a 250000 se efectuara un valor de 8%//
//fin del programa//
//adios//


#include <stdio.h>
int main(){

	float precio_traje,descuento_15,descuento_8;
	
	printf ("ingrese el valor del traje: \n");
	scanf ("%f", &precio_traje);
	if (precio_traje>250000){
	printf ("su traje tiene un descuento de 15 porciento \n");
	descuento_15= 0.85*precio_traje;
	printf ("el valor del traje con su descuento es de: %.1f\n", descuento_15);
}
	else if (precio_traje<=250000){
		printf ("usted tiene un descuento por su traje de 8 ṕorciento \n");
		descuento_8= (0.08*precio_traje);
		printf ("el valor de su traje con el descuento es de: %.1f\n", descuento_8);
}
		return 0;
	}										
