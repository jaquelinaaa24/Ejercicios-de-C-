//Escribir un programa que realice lea por teclado
//20 caracteres. Luego de la lectura indicar cuantas
//"a" se ingresaron, cuantas "e, i, o, u"

#include <stdio.h>
#include <stdlib.h>

int main()
{
int contador=0;
int contadorVocalA=0;
int contadorVocalE=0;
int contadorVocalI=0;
int contadorVocalO=0;
int contadorVocalU=0;
char vocal;

while(contador<5)
{
    printf("Ingrese una letra: ");
    fflush(stdin);
    scanf("%c",&vocal);

    contador++;

    if(vocal=='a')
    {
    contadorVocalA++;
    }

    else if(vocal=='e')
    {
    contadorVocalE++;
    }
    else if(vocal=='i')
    {
    contadorVocalI++;
    }
    else if(vocal=='o')
    {
     contadorVocalO++;
    }
    else if(vocal=='u')
    {
    contadorVocalU++;
    }
}
 printf("La cantidad de A ingresadas es de: %d\n" ,contadorVocalA);
 printf("La cantidad de E ingresadas es de: %d\n" ,contadorVocalE);
 printf("La cantidad de I ingresadas es de: %d\n" ,contadorVocalI);
 printf("La cantidad de O ingresadas es de: %d\n" ,contadorVocalO);
 printf("La cantidad de U ingresadas es de: %d" ,contadorVocalU);

return 0;
}


