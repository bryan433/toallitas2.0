/*En una estación meteorológica registramos la temperatura (en grados centı́grados) cada hora durante
una semana. Almacenamos el resultado en una matriz de 7 X 24 (cada fila de la matriz contiene las 24
mediciones de un dı́a). Diseña un programa que lea los datos por teclado y muestre:
La máxima y mı́nima temperaturas de la semana.
La máxima y mı́nima temperaturas de cada dı́a.
La temperatura media de la semana.
La temperatura media de cada dı́a.
El número de dı́as en los que la temperatura media fue superior a 30 grados.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void llenar_matriz(int tam1,int tam2, int matriz[tam1][tam2] ){
	int i, j,num;
	for(i=0; i<tam1;i++){
		for (j=0; j<tam2; j++){
			
			num = 1+(rand()%40);
			matriz[i][j]=num;
			
		}
	}

}
void grados_dia(int tam1,int tam2, int matriz[tam1][tam2]){
	int i, j, mayor, menor;
	
	for(i=0; i<tam1;i++){
		mayor=0;
		menor=100;
		for (j=0; j<tam2; j++){
			if (menor< matriz[i][j]){
			}
			else{
				menor= matriz[i][j];
			}
			if (mayor> matriz[i][j]){
			}
			else{
				mayor= matriz[i][j];
			}
		}
		printf("la temperatura maxima de dia %d es:  %d°C\n", i+1, mayor);
		printf("la temperatura minima de dia %d es:  %d°C\n", i+1, menor);
	} 
	printf("\n");
	
}
void grados_semana(int tam1,int tam2, int matriz[tam1][tam2]){
	int i, j, mayor=0, menor=100;
	
	for(i=0; i<tam1;i++){
		for (j=0; j<tam2; j++){
			if (menor< matriz[i][j]){
			}
			else{
				menor= matriz[i][j];
			}
			if (mayor> matriz[i][j]){
			}
			else{
				mayor= matriz[i][j];
			}
		}
	} 
	printf("la temperatura maxima de la semana es:  %d°C\n", mayor);
	printf("la temperatura minima de la semana es:  %d°C\n", menor);
}
	
void imprimir_matriz(int tam1,int tam2, int matriz[tam1][tam2]){
	int i, j;
	for(i=0; i<tam1;i++){
		printf ("dia %d\n", i+1);
		for (j=0; j<tam2; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	
}
void media_semana_dia(int tam1,int tam2, int matriz[tam1][tam2]){
	int i, j, suma=0 ;
	
	printf("\n");
	
	for(i=0; i<tam1;i++){
		for (j=0; j<tam2; j++){
			suma= (suma + matriz[i][j]);
		}
		suma = suma/24;
		printf("La media del dia %d es: %d°C\n",i+1,suma);
		suma=0;
	}
	
}
void media_superior(int tam1,int tam2, int matriz[tam1][tam2]){
	int i, j, suma=0, contador_dias=0, media=0 ;
	
	printf("\n");
	
	for(i=0; i<tam1;i++){
		for (j=0; j<tam2; j++){
			suma= (suma + matriz[i][j]);
			
		}
		media= suma/24;
		
		if (media>30){
			contador_dias=contador_dias+1;
		}
		suma=0;
	}
	printf("Los días en que la media es superior a 30°: es el dia %d\n", contador_dias);
	
}


int main(){
	int tam1= 7, tam2= 24;
	srand(time(NULL));
	
	int matriz[tam1][tam2];
	llenar_matriz(tam1,tam2, matriz);
	imprimir_matriz(tam1,tam2,matriz);
	grados_dia(tam1,tam2,matriz);
	grados_semana(tam1,tam2, matriz);
	media_semana_dia(tam1,tam2, matriz);
	media_superior(tam1,tam2, matriz);
	

return 0;
}
