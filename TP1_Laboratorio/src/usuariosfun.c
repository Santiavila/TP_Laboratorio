/*
 * usuariosfun.c
 *
 *  Created on: 17 abr. 2021
 *      Author: Santiago
 */

#include <stdio.h>
#include <stdlib.h>

int menuDeOpciones(int primerOperando, int segundoOperando,int flagPrimerOperando, int flagSegundoOperando)
{

	int opcion;

		printf("\nPOR FAVOR, ELIJA UNA OPCIÓN:");


		if (flagPrimerOperando){
			printf("\n1. 1er operando cargado: %d", primerOperando);
		} else {

			printf("\n1. Ingrese 1er operando.");
		}

		if (flagSegundoOperando){
			printf("\n 2. 2do operando cargado: %d", segundoOperando);
		} else {
			printf("\n2. Ingrese 2do operando.");
		}
		printf("\n3. Calcular todas las operaciones\n");
		    printf("   a) Calcular la suma (A+B)\n");
		    printf("   b) Calcular la resta (A-B)\n");
		    printf("   c) Calcular la division (A/B)\n");
		    printf("   d) Calcular la multiplicacion (A*B)\n");
		    printf("   e) Calcular el factorial (A!)\n");
		    printf("\n4. Informe de resultados.");
		    printf("\n 5. Salir\n\n");

		fflush(stdout);
		scanf("%d", &opcion);

		return opcion;
	}
