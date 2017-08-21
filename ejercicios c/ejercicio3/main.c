//3. Escribir un programa que realice las siguientes acciones
// Limpie la pantalla
// Asigne a 2 variables numero1 y numero2 valores distintos de cero
// Efectúe el producto de dichas variables
//Obtenga el cuadrado de numero1 y lo muestre por pantalla
// Muestre el resultado pos pantalla

#include <stdio.h>
#include <stdlib.h>


int main()
{
int numero1;
int numero2;
int producto;
int cuadrado;

printf("Por favor ingrese el primer numero: ");
scanf("%d",&numero1);

while(numero1==0)
{
  printf("Por favor ingrese un numero distinto de cero");
  scanf("%d",&numero1);
  system("cls");
}

printf("Por favor ingrese el segundo numero: ");
scanf("%d",&numero2);

while(numero2==0)
{
  printf("Por favor ingrese un numero distinto de cero");
  scanf("%d",&numero2);
  system("cls");
}

producto=(numero1*numero2);
cuadrado=(numero1*numero1);

printf("El resultado de la multiplicacion es: %d El cuadrado del primer numero ingresado es: %d" ,producto,cuadrado);

return 0;
}

