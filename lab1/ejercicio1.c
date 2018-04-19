//inicio del programa//
//declaramos las variables en int y char//
//iniciamos un while como un contador de votos//
//preguntamos si esque quieres seguir votando, si no quiere votar debe presionar f para terminar el algoritmo//
//imprimimos el total de votos//
//imprimimos el total de votos de cada candidato//
//le damos las felicitacions al candidato que gano//
//fin del programa//
//adios//
#include <stdio.h>
int main (void)
{
	int candidato1=0,candidato2=0,candidato3=0,votos=0,nulo=0,totaldevotos;
	char x;
		printf ("elija su candidato: \n");
		scanf ("%d", &votos);
		
	while (x!= 'f')
	{
		
	switch (votos){
		case 1:
			candidato1++;
		break;
		case 2:
			candidato2++;
		break;
		case 3:
			candidato3++;
		if (votos!=0 || votos>3){
			nulo= nulo+1;
	}
		
	}//switch
	votos=0;
	printf ("¿quiere seguir votando?\n");
	printf ("presione f para terminar la votacion: \n");
	scanf ("%c", &x);
	if(x!='f'){
	printf ("elija su candidato: \n");
	scanf ("%d", &votos);
	}
	}//while
	totaldevotos= candidato1+candidato2+candidato3+nulo;
	printf ("el total de votos realizados son: %d\n", totaldevotos);
	printf ("la cantidad de votos del candidato1 es: %d\n", candidato1);
	printf ("la cantidad de votos del candidato2 es: %d\n", candidato2);
	printf ("la cantidad de votos del candidato3 es: %d\n", candidato3);
	printf ("la cantidad de votos nulos es: %d\n", nulo);
	if((candidato2<candidato1)&&(candidato1>candidato3)){
		printf ("!felicitaciones¡ gano el candidato 1");
	}
	if ((candidato1<candidato2)&&(candidato2>candidato3)){
		printf ("!felicitaciones¡ gano el candidato 2");
	}
	if ((candidato2<candidato3)&&(candidato3>candidato1)){
		printf ("!felicitaciones¡ gano el candidato 3"); 
	}
	if ((candidato1==candidato2)&&(candidato1==candidato3)){
		printf ("es un empate entre los candidatos\n");
	}
	return 0;
}
