#include <stdio.h>
#include <stdlib.h>

int main()
{
int numeros;
int contador=0;
int acumulador=0;

while(contador<5)
{
    printf("Por favor ingrese 5 numeros: ");
    scanf("%d",&numeros);

    contador++;
    acumulador++;
}
printf("El promedio de los numeros ingresados fue de: %d" ,acumulador/contador);
return 0;
}
