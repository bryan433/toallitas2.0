//inicio del programa//
//declaramos variables de tipo float y int//
//damos el valor total de lo que consumieron//
//calculamos el iva//
//calculamos la propina//
//calculamos el valor final de todo//
//imprimimos el valor final de todo//
//ingresamos la cantidad de amigos//
//calculamos lo que debe pagar cada amigo//
//imprimimos lo que tiene que pagar cada uno//
//fin del programa//
//adios//

#include <stdio.h>
int main (){
	
	float propina,iva,totalfin,cadaunopaga;
	int amigos,total;
	printf ("ingrese el valor total de lo que consumieron: \n");
	scanf ("%d", &total);
	iva= (19*total)/100;
	propina= (10*total)/100;
	totalfin= iva+propina+total;
	
	printf ("el total del consumo mas el iva y la propina es: %.2f\n", totalfin);

	printf ("ingrese la cantidad de amigos");
	scanf ("%d", &amigos);
	cadaunopaga= totalfin/amigos;
	printf ("cada uno debe pagar: %.2f\n", cadaunopaga);
	
	return 0;
}
