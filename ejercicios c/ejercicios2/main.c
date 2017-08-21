/*3. Escribir un programa que realice las siguientes acciones
 Limpie la pantalla
 Asigne a 2 variables numero1 y numero2 valores distintos de cero
 Efectúe el producto de dichas variables
 Muestre el resultado pos pantalla*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int numero1;
int numero2;
int producto;

printf("Por favor ingrese el primer numero: ");
scanf("%d",&numero1);

while(numero1==0)
{
  printf("Por favor ingrese un numero distinto de cero");
  scanf("%d",&numero1);
}

printf("Por favor ingrese el segundo numero: ");
scanf("%d",&numero2);

while(numero2==0) //do{
{
  printf("Por favor ingrese un numero distinto de cero"); //printf("ingrese numero distinto de cero")
  scanf("%d",&numero2); //scanf("%d,&numero1);
}                       //}

producto=(numero1*numero2); //while(1==0);

printf("El resultado de la multiplicacion es: %d" ,producto);

system("pause");
return 0;

}
