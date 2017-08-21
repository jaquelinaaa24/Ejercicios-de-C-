//8. Diseñar un programa que calcule la
//superficie de un triángulo a partir del ingreso de su base y altura y muestre el resultado.

#include <stdio.h>
#include <stdlib.h>

int main()
{
int base;
int altura;
int resultado;

printf("Ingrese la base del triangulo: ");
scanf("%d",&base);

printf("Ingrese la altura del triangulo: ");
scanf("%d",&altura);

resultado=((base*altura)/2);

printf("La superfie del triangulo es: %d" ,resultado);
    return 0;
}
