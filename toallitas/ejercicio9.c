//inicio del programa//
//declaramos nuestras variables//
//ingresamos nuestro suelo base//
//ingresamos el total de ventas que realizamos//
//calculamos la comision//
//imprimimos la comision que obtuvimos//
//calculamos el sueldo total que obtuvimos//
//imprimimos nuestro sueldo base//
//fin del programa//
//adios//

#include <stdio.h>

int main()
{
int sueldobase,ventas,sueldototal;
float comision;
printf ("ingrese su sueldo base:\n");
scanf ("%d", &sueldobase);
printf ("ingrese el numero de ventas que tuvo:\n");
scanf ("%d", &ventas);
comision= ventas*0.07;
printf ("la comision que obtuvo es de: %.2f\n", comision);
sueldototal= sueldobase+comision;
printf ("el sueldo total que obtuvo es: %.2d\n", sueldototal);
return 0;
}

