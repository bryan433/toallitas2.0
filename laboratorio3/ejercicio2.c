/*creamos un procedimiento para calcular en donde debe posicionarce el asterisco
 *creamos otro procedimiento para crear un termometro donde cada 10 salga la temperatura
 *declaramos nuestras variables
 *ingresamos la temperatura
 *llamamos nuestro procedimiento llamado grados
 *llamamos a nuestro procedimiento termometro*/
  


#include <stdio.h>

void termometro(int k){
	int x;
	for (x=0 ; x< k-1 ; x++){
		printf ("-");
	}
	printf ("*");
}

void grados(){
	printf ("0        10        20        30        40\n");
	printf ("|        |         |         |         |\n");
}

int main(){
	int k;
	printf ("ingrese su temperatura:\n");
	scanf ("%d", &k);
	grados();
	termometro(k);
	
	return 0;
}
