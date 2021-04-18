/*
 * usuariosfunc.h
 *
 *  Created on: 17 abr. 2021
 *      Author: Santiago
 */

#ifndef USUARIOSFUN_H_
#define USUARIOSFUN_H_

/** \brief  Muestra el menú principal con las opciones de la
 *          calculadora, retorna un int con la opción seleccionada
 *
 * \param primerOperando int Primer operando ingresado que será reemplazado en el menú
 * \param segundoOperando int Segundo operando ingresado que será reemplazado en el menú
 * \param flagPrimerOperando int Bandera que indica 1 si se ingresó el primer operando o 0 en caso contrario
 * \param flagSegundoOperando int Bandera que indica 1 si se ingresó el segundo operando o 0 en caso contrario
 * \return int Entero que representa la opción seleccionada por el usuario
 *
 */


int menuDeOpciones(int primerOperando, int segundoOperando, int flagPrimerOperando, int flagSegundoOperando);


#endif /* USUARIOSFUN_H_ */

