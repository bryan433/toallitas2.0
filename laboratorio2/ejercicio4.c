//inicio del programa//
//declaramos nuestras variables en numero enteros//
//iniciamos un ciclo para ver durante 5 partidos si nuestro equipo perdio o gano, y contar los puntos que obtenian con cada partido//
//imprimimos los puntos que llevan hasta la fecha//
//fin del programa//


#include <stdio.h>
int main (){

int i=0,equipo_contrario,tu_equipo,contador=0;

while (i<5){
	printf ("ingrese los goles del equipo contrario:\n");
	scanf ("%d", &equipo_contrario);
	printf ("ingrese los goles de tu equipo:\n");
	scanf ("%d", &tu_equipo);
	printf ("\n");
	if (equipo_contrario<tu_equipo){
		printf ("tu equipo ha ganado");
		contador= contador+3;
	}
	printf ("\n");
	if (equipo_contrario>tu_equipo){
		printf ("tu equipo ha perdido");
		contador= contador+0;
	}
	printf ("\n");
	if (equipo_contrario==tu_equipo){
		printf ("el partido termino en un empate");
		contador= contador+1;
	}
	printf ("\n");
	i++;
}
printf ("los puntos que llevan hasta la fecha son: %d\n", contador);
return 0;
}
