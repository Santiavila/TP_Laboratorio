/*
 * matematica.h
 *
 *  Created on: 17 abr. 2021
 *      Author: Santiagp
 */
#ifndef MATEMATICA_H_
#define MATEMATICA_H_

/*
 * brief suma de dos números enteros
 * param1 recibe un entero
 * param2 recibe el entero a sumar
 * return devuelve el resultado de la suma
 */
int sumar(int primerNumero, int segundoNumero);
/* brief: resta de dos números enteros
 * param1: recibe un entero
 * param2: recibe un entero a restar
 * return: devuelve el resultado de la resta
 */
int restar(int primerNumero, int segundoNumero);
/*
 * brief: divide entre dos números enteros
 * param1: recibe un entero
 * param2: recibe un entero a dividir
 * return: devuelve el resultado de la division
 */
float dividir(int primerNumero, int segundoNumero);
/** \brief Retorna el producto entre primerNumero y segundoNumero que son dos números enteros
 *
 * \param1 primerNumero int Primer factor del producto
 * \param2 segundoNumero int Segundo factor del producto
 * \return int Número entero producto entre primerNumero y segundoNumero
 *
 */
int multiplicar(int primerNumero, int segundoNumero);
/** \brief Calcula el factorial de numero
 *
 * \param numero int Número entero positivo
 * \return int Retorna el resultado del factorial de numero, si es 0 es igual a 1
 **/
int factorial(int numero);

#endif /* MATEMATICA_H_ */

