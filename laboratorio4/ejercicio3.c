/* inicio del programa
 * definir una funcion en la que calculamos la cantidad de personas que 
 * salieron en el procentaje de error, realizamos otra funcion en la que
 * le sumamos 1 que es la que realmente salio infecatada, luego en otra 
 * funcion calculamos el porcentaje de personas de estar infectado,
 * en un procedimiento imprimimos nuestro resultado, en la funcion main
 * declaramos nuestras funciones y nuestro procedimiento*/
#include <stdio.h>

 float probabilidad_infectados(){
	 float total_personas=100000.0;
	 float personas_con_error;
	 personas_con_error= total_personas*0.01;
	 
	 return personas_con_error;
 }
 
 float personas_tal_ves_infectadas(){
	 float total_de_personas_con_error;
	 total_de_personas_con_error= 0.5*probabilidad_infectados();
	 
	 return total_de_personas_con_error;
}

 float cantidad_de_personas(){
	 float tal_ves_estan_infectados;
	 tal_ves_estan_infectados=1+ personas_tal_ves_infectadas();
	 
	 return tal_ves_estan_infectados;
 }
 float porcentaje_de_personas_infectadas(){
	 float porcentaje;
	 porcentaje= 100000.0/(100.0*cantidad_de_personas());
	 return porcentaje;
 }
 void imprimir_el_porcentaje(float porcentaje){
	printf ("el porcentaje final es aproximadamente: %f", porcentaje);
}
 int main(){
	float ppi;
	probabilidad_infectados();
	personas_tal_ves_infectadas();
	cantidad_de_personas();
	ppi= porcentaje_de_personas_infectadas();
	imprimir_el_porcentaje(ppi);
	return 0;
}

