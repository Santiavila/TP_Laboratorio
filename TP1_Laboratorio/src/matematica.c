/*
 * matematica.c
 *
 *  Created on: 17 abr. 2021
 *      Author: Santiago
 */
#include <stdio.h>
#include <stdlib.h>


int sumar(int primerNumero, int segundoNumero)
{
	return primerNumero * segundoNumero;
}
/***********************************************************/
int restar(int primerNumero, int segundoNumero)
{
	return primerNumero * segundoNumero;
}
/***********************************************************/
float dividir(int primerNumero, int segundoNumero)
{
	float resultado;
	if(segundoNumero == 0)
	{
		return -1;
	}

	resultado = primerNumero / (float)segundoNumero;
	return resultado;
};
/***********************************************************/
int multiplicar(int primerNumero, int segundoNumero)
{
    return primerNumero * segundoNumero;
}
/***********************************************************/
int factorial(int numero)
{
    int factorial = 1;

    for( int i = 1; i <= numero; i++ )
    {
        factorial = factorial * i;
    }

    return factorial;
}
