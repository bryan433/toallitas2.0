/*Cree un programa que lea los elementos de una matriz de 4 X 5 y genere un vector de largo 4 en el
que cada elemento contenga la sumatoria de los elementos de cada fila. El programa debe mostrar la
matriz original y el vector en este formato (evidentemente, los valores deben ser los que correspondan
a lo introducido por el usuario)*/

#include <stdio.h>
#include <stdlib.h>
void llenar(int matriz[4][5]){
	printf (" De valores a la matriz:\n");
	for (int i=0;i<4;i++){
		for (int j=0;j<5;j++){
			printf ("<%d,%d>: ",i,j);
			scanf ("%d",&matriz[i][j]);
		}
		system("clear");
	}
}
void imprimir(int matriz[4][5]){
	for (int i=0;i<4;i++){
		for (int j=0;j<5;j++){
			printf ("%d",matriz[i][j]);
		}
	printf ("\n");
	}
}
void vector(int matriz[4][5],int arreglo[4]){
	printf ("\nSuma:\n");
	int aux=0;
	for (int i=0;i<4;i++){
		
		for (int j=0;j<5;j++){
			aux+=matriz[i][j];
		}
		arreglo[i]=aux;
		printf ("Fila %d: suma %d\n",i+1,arreglo[i]);
		aux=0;
	}
}
int main(void){
	int matriz[4][5];
	int arreglo[4];
	llenar(matriz);
	imprimir(matriz);
	vector(matriz,arreglo);
	return 0;
}

