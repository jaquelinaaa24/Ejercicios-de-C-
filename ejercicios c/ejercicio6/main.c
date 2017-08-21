//6. De 10 números ingresadas indicar cuantos son mayores a cero y cuantos son menores a cero

#include <stdio.h>
#include <stdlib.h>

int main()
{
int contador=0;
int contadorPositivos=0;
int contadorNegativos=0;
int numero;

while(contador<10)
   {
    printf("Ingrese 10 numeros: ");
    scanf("%d",&numero);

    contador++;
    }

if(numero>=0)
     {
     contadorPositivos++;
     }

else
    {
    contadorNegativos++;
    }

printf("La cantidad de numeros ingresados mayores a 0 son: %d La catidad de numeros ingresados menores a 0 son: %d" ,contadorPositivos,contadorNegativos);
    return 0;
}
