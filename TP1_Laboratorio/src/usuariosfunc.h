/*
 * usuariosfunc.h
 *
 *  Created on: 17 abr. 2021
 *      Author: Santiago
 */

#ifndef USUARIOSFUN_H_
#define USUARIOSFUN_H_

/** \brief  Muestra el men� principal con las opciones de la
 *          calculadora, retorna un int con la opci�n seleccionada
 *
 * \param primerOperando int Primer operando ingresado que ser� reemplazado en el men�
 * \param segundoOperando int Segundo operando ingresado que ser� reemplazado en el men�
 * \param flagPrimerOperando int Bandera que indica 1 si se ingres� el primer operando o 0 en caso contrario
 * \param flagSegundoOperando int Bandera que indica 1 si se ingres� el segundo operando o 0 en caso contrario
 * \return int Entero que representa la opci�n seleccionada por el usuario
 *
 */


int menuDeOpciones(int primerOperando, int segundoOperando, int flagPrimerOperando, int flagSegundoOperando);


#endif /* USUARIOSFUN_H_ */

