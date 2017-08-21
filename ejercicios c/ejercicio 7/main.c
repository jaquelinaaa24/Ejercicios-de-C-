//7. Diseñar un programa que calcule la longitud de la circunferencia
//y el área del círculo de radio dado.

#include <stdio.h>
#include <stdlib.h>

int main()
{
float area;
float longitud;
int radio;

printf("Por favor ingrese el radio del circulo: ");
scanf("%d",&radio);

area=(3.1416*(radio*radio));
longitud=(2*3.1416*radio);

printf("El area del circulo es: %f\n La longitud del circulo es: %f" ,area,longitud);
    return 0;
}
