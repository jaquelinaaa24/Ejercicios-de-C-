//Escribir
//en C un programa que muestre los números impares entre
//0 y 100 y que imprima cuantos impares hay

#include <stdio.h>
#include <stdlib.h>


int main()
{
system("color 57");
int contador=0;
int contadorImpar=0;


while(contador<=100)
{


printf("%d\n",contador);

contador++;

if(contador%2==1)
{
contadorImpar++;
}
}
printf("La cantidad de numeros impares es de: %d" ,contadorImpar);
system("pause");
return 0;
}
