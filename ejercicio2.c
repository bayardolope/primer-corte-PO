
#include <stdio.h>
#include <math.h> 

int main(){

char producto[20];
    float precioCompra, precioVenta, existencia, ganancia, gananciaTotal;
    printf("Ingrese el nombre del producto: ");
    scanf("%s", &producto);
    printf("Ingrese el precio de compra: ");
    scanf("%f", &precioCompra);
    printf("Ingrese el precio de venta: ");
    scanf("%f", &precioVenta);
    ganancia = precioVenta - precioCompra;
    gananciaTotal = ganancia * existencia;
    printf("El producto %s tiene una ganancia de %.2f y una ganancia total de %.2f",
    producto, ganancia, gananciaTotal);
    return 0;
    
}