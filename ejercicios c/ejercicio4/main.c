//4. Escribir un programa que realice las siguientes acciones:
// Limpie la pantalla
// Declare 2 variables y les asigne sendos valores
// Realice la resta de dichas variables y muestre por pantalla la leyenda
// "Resultado positivo" en caso de ser mayor que cero o "Resultado negativo" si es menor que cero

#include <stdio.h>
#include <stdlib.h>

int main()
{
int numero1;
int numero2;
int resta;

printf("Ingrese el primer numero: ");
scanf("%d",&numero1);

printf("Ingrese el segundo numero: ");
scanf("%d",&numero2);

resta=(numero1-numero2);
printf("La resta dio: %d\n" ,resta);

 if(resta>0)
    {
  printf("El resultado dio positivo");
    }
 else if(resta==0)
 {
  printf("el resultado dio 0");
 }
 else
   {
    printf("El resultado es negativo");
   }
 return 0;
}
