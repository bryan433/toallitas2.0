/*definimos un procedimiento para poder calcular el sueldo del trabajador
el contador que son las horas trabajadas por el lo que le pegan por cada hora*/
/*definimos nuestras variables en numero enteros*/
/*realizamos un ciclo para ingresar las horas que trabajo en 6 dias*/
/*imprimimos las horas trabajadas*/
/*preguntamos lo que le pagan al trabajador por cada hora*/
/*ahora llamamos la funcion para realizar la operacion de cuanto va a 
ser el sueldo del trabajador*/
/*imprimimos el sueldo final del trabajador*/
/*fin del programa*/

#include <stdio.h>
	void 
		total_a_pagar(int resultado){
			 printf ("el sueldo del trabajador es: %d\n",resultado);
		}
		
int sueldo_horas_trabajadas(int contador, int valor_por_hora){
			int resultado;
			resultado= (contador*valor_por_hora);
			
			return resultado;
}

int main (){
		printf ("programa para calcular el sueldo total de un empleado\n");
		int horas;
		int x;
		int valor_por_hora;
		int contador=0;
		int resultado;
		for (x=1;x<=6;x++){
			printf ("¿cuantas horas trabajo el dia %d?:\n", x);
			scanf ("%d", &horas);	
			contador= horas+contador;
		}	
	printf ("las horas trabajadas fueron: %d\n", contador);
	
	printf  ("¿cuanto le van a pagar por cada hora trabajada?\n");
	scanf ("%d", &valor_por_hora);
	
	resultado=sueldo_horas_trabajadas(contador,valor_por_hora);		
	total_a_pagar(resultado);
return 0;
}
