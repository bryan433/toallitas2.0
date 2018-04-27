/*iniciamos un procedimiento con un for para calcular lo que paga
cada mes, donde se duplica la cuota anterior*/
/*luego indicamos nuestras variables en numero enteros*/
/*llamamos a nuestro procedimiento para calcular el total de todo lo que pago*/
/*imprimimos el resultado de nuestro anterior resultado*/
/*fin del programa*/


#include <stdio.h>

	void 
		total_a_pagar(int contador){
		printf ("el total a pagar es: %d\n", contador);
		}
		int pago_por_mes(int contador , int pagos){ 	
		int x;
			 for (x=1 ; x<=pagos ; x++){
			printf ("la cuota %d", x);
			printf (" debe pagar : %d\n", contador);
			contador= contador*2;
			}
	return contador;
}

int main (){
	
	printf ("programa para calulcular el monto final despues de 20 cuotas\n");
	
	int pagos=20;
	int contador=10;
	
	contador=pago_por_mes(contador,pagos);
	
	total_a_pagar(contador);
		
	return 0;
	}	
