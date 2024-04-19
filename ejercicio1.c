#include <stdio.h>
#include <math.h>

/*Leer dos números e imprima cual es mayor y el menor de los números ingresado*/
int main()
{
    int num1, num2;
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("El numero mayor es: %d\n", num1);
        printf("El numero menor es: %d\n", num2);
        }

    return 0;
}