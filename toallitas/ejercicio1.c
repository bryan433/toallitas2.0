//iniciar programa//
//declaramos variables//
//ingresamos nuestro numero de matricula//
//damos valor a cada calificacion//
//sumamos estas 3 calificaciones//
//sacamos el promedio de estas 3 calificaciones//
//imprimimos nuestro numero de matricula//
//imprimimos nuestro promedio//
//fin del programa//
//adios//

#include <stdio.h>

int main()
{
float promedio,calificacion_1,calificacion_2,calificacion_3,suma;
int matricula;
printf ("ingrese su numero de matricula:\n");
scanf ("%d", &matricula);
printf ("ingrese su calificacion_1:\n");
scanf ("%f", &calificacion_1);
printf ("ingrese su calificacion_2:\n");
scanf ("%f", &calificacion_2);
printf ("ingrese su calificacion_3:\n");
scanf ("%f", &calificacion_3);
suma= calificacion_1+calificacion_2+calificacion_3;
promedio= suma/3;
printf ("su promedio es: %f\n", promedio);
printf ("su numero de matricula es: %d\n", matricula);
return 0;
}
