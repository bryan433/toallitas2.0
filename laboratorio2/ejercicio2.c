//inicio del programa//
//declaramos nuestras variables en numero enteros//
//iniciar un ciclo a traves de un while//
// dentro de nuestro ciclo while iniciamos otro ciclo llamado for con el que limitamos cada linea//
//despues con el for le vamos sumando al valor de x 1//
//imprimimos nuestros numeros desde el 1 al 9 en una figura//
//fin del programa//

#include <stdio.h>
int main (){
int linea,z,x,c;

	while (linea < 1 || linea >9){
		printf ("ingrese linea: ");
		scanf ("%d", &linea);
	}
	for (z=1; z <= linea; z++) {
		for (x=1; x<=z; x++){
			printf ("%d", x);
		
			if (x == z) {
				for (c = x - 1; c > 0; c--){
				}
			}
		} 
		printf ("\n");
	}
return 0;
}
