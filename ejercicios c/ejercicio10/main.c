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


while(contador<100)
{

contador++;

if(contador%2==1)
{
printf("Los numeros impares son: %d\n" ,contador);
}
}
system("pause");
return 0;
}
