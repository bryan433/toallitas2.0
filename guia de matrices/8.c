/*Construya un programa en Python que intercambie los renglones de una arreglo bidimensional. Los
elementos del renglón 1 deben intercambiarse con el del renglón N, los del renglón 2 con los del renglón
N-1, y ası́ sucesivamente.*/

#include <stdio.h>
#include <stdlib.h>
void llenar_matriz(int n,int matriz[n][n]){
	for(int i=0;i<n;i++){
		for(int k=0;k<n;k++){
			printf ("<%d,%d>",i,k);
			scanf ("%d",&matriz[i][k]);
		}
		printf ("\n");
		system("clear");
	}
}

void imprimir_matriz(int n,int matriz[n][n]){
	for (int i=0;i<n;i++){
		for (int k=0;k<n;k++){
			printf ("%d ",matriz[i][k]);
		}
		printf ("\n");
	}
}

void cambiodematriz(int n, int matriz [n][n]){
	for (int i=n-1;i>=0;i--){
		for (int k=0;k<n;k++){
			printf ("%d ", matriz[i][k]);
		}
		printf ("\n");		
	}
}
	
int main(void){
	int n=0;
	printf("ingrese el tamaño de la matriz: ");
	scanf ("%d", &n); 
	int matriz[n][n];
	llenar_matriz(n,matriz);
	printf ("matriz original");
	printf ("\n");	
	imprimir_matriz(n,matriz);
	printf ("cambio de fila");
	printf ("\n");
	cambiodematriz(n, matriz);
	
	return 0;
}

