//inicio del programa//
//declaramos nuestras variables en numero enteros y numero flotantes//
//ingresamos la edad del niño//
//ingresamos el peso del niño//
//si el niño tenia mas de un año su dosis seria normal multiplicando su peso por 0.2//
//imprimimos la dosis que debemos administrar//
//imprimimos las gotas que debemos dar//
//si el niño tiene menos de un año debemos dividir la dosis normal en 3//
//transformamos cada dosis en gotas, multiplicandola por 5//
//imprimimos su dosis//
//imprimimos la cantidad de gotas//
//fin del programa//



#include <stdio.h>
int main (){
int dosis,gotas;
float x,peso,gotas2,dosis2;
	printf ("ingrese la edad del niño:\n");
	scanf ("%f", &x);
	printf ("ingrese el peso del niño;\n");
	scanf ("%f", &peso);
		if (x>1){
			dosis= (peso*0.2);
			printf ("la dosis que debemos dar es: %d ml\n", dosis); 
			gotas= (dosis*5);
			printf ("las gotas que se deben administar es: %d gotas por dia\n", gotas);
	}
		else if (x<1){
			printf ("al niño se le debe administrar una cantidad diferente \n");
			dosis2= (peso*0.2)/3;
			printf ("la dosis que le debemos dar es: %.2f\n", dosis2);
			gotas2= dosis2*5;
			printf ("la dosis del bebe seria: %.2f gotas por dia\n", gotas2);
		}
return 0;
}
