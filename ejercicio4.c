#include <stdio.h>
#include <math.h>

/*Cree una función para calcular la raíz cuadra de un numero entre 80 y 200.*/

int main (){
int num ;

printf("Ingrese un numero entre 80 y 200: ");
scanf("%d",&num);
printf ("La raiz cuadrada de %d es: %.2f",num,sqrt(num));
printf("Gracias por utilizarme");
    return 0 ;
}