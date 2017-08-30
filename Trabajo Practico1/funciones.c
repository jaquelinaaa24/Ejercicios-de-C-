#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


float pedirNumero(char texto [])
{
    float numero;
    printf("%s",texto);
    scanf("%f",&numero);
    return numero;
}



float sumaNumeros(float numeroUno, float numeroDos)
{
    float sumaNumeros=numeroUno+numeroDos;
    return sumaNumeros;
}


float restaNumeros(float numeroUno, float numeroDos)
{
    float restaNumeros= numeroUno-numeroDos;
    return restaNumeros;
}



float multiplicacionNumeros(float numeroUno, float numeroDos)
{
    float  multiplicacionNumeros=numeroUno*numeroDos;
    return multiplicacionNumeros;
}



float divisionNumeros(float numeroUno, float numeroDos)
{
    float divisionNumeros= (numeroUno/numeroDos);
    return divisionNumeros;
}


long long int factorial(int numeroFactorial)
{
    long long int respuesta;
    if(numeroFactorial==0)
    {
        return 1;
    }
    else
    {
        respuesta=numeroFactorial*factorial(numero-1);
        return respuesta;
    }

}


   float verificacion(float numeroUno, float numeroDos, float z)
    {
        if( ingresoNumeroUno()== 1 && ingresoNumeroDos()== 1)
        {
            printf("\n%f\n", z);
        }
        else
        {

            printf("\nDebe ingresar ambos operandos para poder realizar esta accion\n");

        }
    }


    float comprobacionDelDivisor(float numeroUno)
    {
        if (numeroUno != 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    verificacionDelIngreso(float ingresoNumeroUno(), float ingresoNumeroDos(), int ingreso)
    {
        if( numeroUno == 1 && numeroDos == 1)
        {
            printf("\n%f\n", ingreso);
        }
        else
        {

            printf("\nPor favor debe ingrese un primer operando y un segundo operando para realizar esta accion\n");

        }
    }




    float verificarEntero(float resultado)
    {
        int entero;
        int verificador;
        verificador=(int)resultado;
        if(resultado-verificador==0)
        {
            entero=1;
        }
        else
        {
            entero=0;
        }
        return entero;
    }



