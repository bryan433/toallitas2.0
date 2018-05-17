/*realizamos un procedimiento, dandole un parametro llamado variable,
 * luego de declarar todas nuestras variables de tipo entero, realizamos
 * un while donde le decimos que la suma tiene que ser mayor a 0 O el 
 * cont igual a 0, y la suma la igualamos a 0, despues realizamos otro 
 * while dentro del while anterior, al cual como parametro le decimos,
 * que la variable tiene que ser mayor a 10, luego descomponemos el numero
 * que ingresamos sacando el mod10 de la variable, luego la variable la
 * dividimos en 10, y el resultado de A lo sumo en la variable suma,
 * luego imprimimos todas las variables, al final del procedimiento 
 * imprimimos la raiz dijital del numero ingresado, en la funcion main
 * pedimos el numero, y llamamos a nuestro procedimiento, luego se 
 * finaliza el programa*/


#include <stdio.h>

void
descomponer(int variable){
	int suma;
	int A=0;
	int cont=0;
	while (suma>10 || cont==0){		
		suma=0;
		while(variable>10){
		
			A = variable%10;
			variable = variable/10;
			suma= suma + A;
			printf ("digitos : %d\n", A);
			printf ("suma: %d\n" , suma);
			printf ("variable: %d\n", variable);
		}
 
		suma=variable+suma;
		variable=A + 1;
		cont=1;
	}
	printf ("la raiz digital del numero ingresado es: %d\n", suma);
}



int main(){
	
	int variable=0;
		printf("ingrese un numero: ");
		scanf ("%d", &variable);
		
	    descomponer(variable);
		return 0;
}
