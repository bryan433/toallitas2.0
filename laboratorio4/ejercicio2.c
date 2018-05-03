/* Realizamos un procedimiento en el cual dividimos la cantidad de huevos
 * por personas, luego realizamos otra funcion con el cual sacamos el
 * resto de juan, en la otra funcion sacamos el resto de manuel,
 * despues sumamos los restos de las dos personas, en otro procedimiento
 * calculamos el dinero de juan en funcion al dinero de antonio, en el cual
 * multiplicamos el dinero de antonio por el resto de juan y luego lo
 * dividimos por la suma de restos, luego en otra funcion hacemos lo
 * mismo que la anterior pero esta ves para calcular el dinero de manuel
 * multiplicando el dinero de antonio por el resto de manuel y dividiendo
 * por la suma de restos de los dos, al final realizamos un procedimiento
 * en el cual imprimimos el dinero de manuel y juan, despues llamamos todas
 * nuestras funciones y nuestro procedimiento en la funcion main.
 * Fin del programa
 */


#include <stdio.h>

float huevos_por_persona(){
	int huevos=8.0; int personas=3.0; float huevospersona;
	huevospersona=huevos/personas;
	
	return huevospersona;
}

float resto1(){
	int juan=3.0; float resto_juan;
	resto_juan=juan-huevos_por_persona();
	return resto_juan;
}

float resto2(){
	int manuel=5.0; float resto_manuel;
	resto_manuel=manuel-huevos_por_persona();
	return resto_manuel;
}

float suma_restos(){
	float restos; 
	restos=resto1()+resto2();
	return restos;
}

float dinero1(){
	int dinero_antonio=80.0; float dinero_juan;
	dinero_juan=(dinero_antonio*resto1())/suma_restos();
	return dinero_juan;
}

float dinero2(){
	int dinero_antonio=80.0; float dinero_manuel;
	dinero_manuel=(dinero_antonio*resto2())/suma_restos();
	return dinero_manuel;
}

void  imprimir_dinero(float dinero_manuel, float dinero_juan){
	printf ("el dinero a pagar a Juan es: %.1f \n", dinero_juan);
	printf ("el dinero a pagar a Manuel es: %.1f \n", dinero_manuel);
}

int main (){
	float x,y;
	huevos_por_persona();
	resto1();
	resto2();
	suma_restos();
	x=dinero1();
	y=dinero2();
	imprimir_dinero(x,y);
	return 0;
}
