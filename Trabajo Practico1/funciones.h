
#define FUNCIONES_H_INCLUDED

/** \brief Pedira un numero al usuario y se guarda en una variable
 *
 * \param Sera el texto que el usuario vera
 * \return Valor que el usuario ingreso
 *
 */
float pedirNumero(char texto []);



/** \brief Su funcion es tomar los dos numeros decimales ingresados por el usuario y sumarlos.
 *
 * \param El primer numero a sumar (float numeroUno)
 * \param El segundo numero a sumar (float numeroDos)
 * \return Resultado de la suma(float)
 *
 */


float sumaNumeros(float,float);

/** \brief Su funcion es tomar los dos numeros decimales ingresados por el usuario y restarlos
 *
 * \param El primer numero a restar (float numeroUno)
 * \param El segundo numero a restar (float numeroDos)
 * \return Resultado de la resta (float)
 *
 */


float restaNumeros(float,float);



/** \brief Se funcion es tomar los dos numeros decimales y dividir el primero por el segundo ingresados por el usuario
 *
 * \param El primer numero sera el primer operando.
 * \param El segundo numero sera el segundo operando.
 * \return Division entre el primer y el segundo operando.
 *
 */

float divisionNumeros(float, float);



/** \brief Su funcio  es tomar dos numeros decimales y multiplicarlos
 *
* \param El primer numero sera el primer operando.
 * \param El segundo numero sera el segundo operando.
 * \return Multiplicacion entre el primer y el segundo operando.
 *
 */


float multiplicacionNumeros(float,float);



/** \brief Su funcion es tomar un numero y calcular su factorial
 *
 * \param Primer operando ingresado por el usuario.
 * \return Factorial del operando ingresado por el usuario.
 *
 */


long long int factorial(int);


/**brief verifica que se hayan ingresado ambos operandos.
 *
 * \param bandera que verifica que el primer numero fue ingresado (float numeroUno)
 * \param bandera que verifica que el segundo numero fue ingresado (float numeroDos)
 * \param la funcion a realizar (float resultado)
 *
 */



float verificacion(float,float,float)



/** \brief Verifica si el segundo operando es distinto de 0
  *
  * \param Segundo operando (float numeroDos)
  * \return Devuelve 1 si el valor es distinto de 0(int)
  * \return Devuelve 0 si el valor es igual a 0(int)
  */



float comprobacionDelDivisor(float);


/** \brief Verifica si un numero ingresado es un entero o un decimal.
 *
 * \param Numero que se desea verificar.
 * \return Variable de tipo booleans.
 *
 */



float verificarEntero(float);






