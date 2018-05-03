/* inicar el programa
 * reslizamos un procedimiento con el cual relizamos un while, para poder
 * calcular el resto de cada valor y asi poder invertir el numero que le
 * estamos ingresando a nuestro programa, luego en nuestra funcion main
 * escribimos nuestra variable, que estaba en el procedimineto, luego 
 * ingresamos nuestro numero inicial, luego llamamos al procedimiento
 * y se imprime el numero invertido
 * fin del programa
 */

#include <stdio.h>      

void
	numero_invertido (int numero_inicial){
	int x=1;
	int resto;
	while(x==1){
		if(numero_inicial<=9){
			x=0;
			}
		resto= numero_inicial%10;
		printf("%d", resto);
			numero_inicial= numero_inicial-resto;
			numero_inicial= numero_inicial/10;
		} 
}

int main(){
	int numero_inicial;
	 printf ("ingrese su numero: ");
	 scanf ("%d", &numero_inicial);
	numero_invertido(numero_inicial); 
return 0;
}
