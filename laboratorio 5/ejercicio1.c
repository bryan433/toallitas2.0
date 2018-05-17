/*creo una funcion con la cual hago un numero aleatorio y lo retorno,
 * luego realizo la funcion main donde declaro variables de tipo enteros
 * y de tipo char, luego realizo un while con el cual le pongo una condicion
 * para saber si esque uno quiere o no seguir el programa, y si quiere seguir
 * preguntar otra ves por quien votan y crear un contador en el cual
 * ir guardando las veces que gano y las veces que perdio, y si empato
 * no se guarda, y imprimir las veces que gano*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numaleatorio (){
	int numero;
	numero = rand()%100;
	return numero;
}

int main ()
{
	int a,b;
	char opcion;
	char fin='S';
	int ganador;
	int perdedor;
	ganador=0;
	perdedor=0;
	srand (time(NULL));
	
	while (fin=='S'){
		printf("A o B\n");
		scanf(" %c", &opcion);
		a=numaleatorio();
		b=numaleatorio();
		printf ("el numero generado para a es: %d\n",a);
		printf ("el numero generado para b es: %d\n",b);
		if (opcion=='a' && a>b){
			ganador++;
		
			printf("HAS GANADO\n");
		}
			else if (opcion== 'b'&& b>a){
				ganador++;
			
			printf("HAS GANADO\n");
			
		}
		else {
			perdedor++;
			printf("HAS PERDIDO\n");
		
		printf ("Quieres probar otra vez? (S/N): \n");
		scanf (" %c",&fin);
		while(getchar()!='\n');
	
	}
	printf("HAS GANADO ESTE NUMERO DE VECES: %d",ganador);
}
	
	
	return 0 ;
}
