#include <stdio.h>
#include <math.h>

int main()
{
    float precio, impuesto, descuento, total;
    printf("Ingrese el precio del producto: ");
    scanf("%f", &precio);
    impuesto = precio * 0.15;
    descuento = precio * 0.05;
    if (precio > 25000)
    {
        total = precio + impuesto - descuento;
        printf("El precio del producto es: %.2f\n", precio);
        printf("El impuesto es: %.2f\n", impuesto);
        printf("el precio total del producto con impuesto y descuento es %.2f\n", total);
    }
    else{
        printf("No se puede ejecutar porfavor intente de nuevo");
    }

    return 0;
}
