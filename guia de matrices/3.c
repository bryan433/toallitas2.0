/*Cree una matriz cuadrada A de NxN, luego pida al usuario rellenarla. Al final del proceso, entregue al
un resumen con: La matriz, la sumatoria de los valores de sus filas y luego la sumatoria de los valores
de toda la matriz.*/

#include <stdio.h>
#include <stdlib.h>
void llenar_matriz(int tam, int a[tam][tam]){
	
	for (int i=0;i<tam;i++){
		for (int j=0;j<tam;j++){
			printf ("Ingrese valores para la coordenada (%d,%d): ",i,j);
			scanf ("%d",&a[i][j]);
		}
		system("clear");	
	}
}

void imprimir_matriz(int tam, int a[tam][tam]){
		
	for (int i=0;i<tam;i++){
		for (int j=0;j<tam;j++){
			printf ("%d ",a[i][j]);		
		}
		printf ("\n");
	}
}

void sumar_filas(int tam, int a[tam][tam]){
	int sumatoria=0;
	for (int i=0;i<tam;i++){
		for (int j=0;j<tam;j++){
			sumatoria+=a[i][j];
		
		}
		printf ("la suma de la fila %d: es %d",i, sumatoria);
		printf ("\n");
		sumatoria=0;
	}
}
void sumar_matriz(int tam, int a[tam][tam]){
	int i,sumatoria=0;
		for (i=0;i<tam;i++){
			for (int j=0;j<tam;j++){
				sumatoria=sumatoria + a[i][j];
		
			}
		printf ("\n");
	}
		printf ("La matriz suma: %d", sumatoria);	
}


int main(){
	int tam=0;
	printf ("Ingrese el N x N del tablero: ");
	scanf ("%d",&tam);
	int a[tam][tam];
		
	system("clear");
	llenar_matriz(tam, a);
	imprimir_matriz(tam, a);
	sumar_filas(tam, a);
	sumar_matriz(tam, a);

	return 0;
}

