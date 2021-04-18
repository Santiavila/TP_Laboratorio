/*********************************************************
* Programa: Trabajo Práctico 1 - Calculadora
* Objetivo:
    - Pedir dos operandos
    - Calcular todas las operaciones
    - Informar resultados
    - Preguntar si desea continuar


* Autor: Avila, Santiago Joaquin
*********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

#include "matematica.h"
#include "usuariosfunc.h"




int main(void) {
	int opcion;
	int primerOperando;
	int segundoOperando;
	int suma;
	int resta;
	float division;
	int multiplicacion;
	int resultadoFactorialUno;
	int resultadoFactorialDos;
	int flagPrimerOperando = 0;
	int flagSegundoOperando = 0;
	int banderaPrimerOpcion = 0;
	int banderaSegundaOpcion = 0;
	int banderaTercerOpcion = 0;


	do {

		//system("cls"); NO PUEDO LOGRAR QUE TOME EL CLEAR



		switch(menuDeOpciones(primerOperando,segundoOperando,flagPrimerOperando,flagSegundoOperando)){

			case 1:
				printf("\n Ingrese el 1er operando (debe ser un número entero).\n");
				fflush(stdout);
				scanf("%d", &primerOperando);
				flagPrimerOperando = 1;
				banderaPrimerOpcion = 1;
				break;

			case 2:
				if(flagPrimerOperando){
				printf("\n Ingrese el 2do operando (debe ser un número entero)\n");
				fflush(stdout);
				scanf("%d", &segundoOperando);
				flagSegundoOperando = 1;
				banderaSegundaOpcion = 1;
				} else {
					printf("\nDebe ingresar el primer operando, seleccione opcion 1.\n Por favor, reintente nuevamente.\n");
				}
				break;

			case 3:

				suma = sumar(primerOperando, segundoOperando);
				resta = restar(primerOperando, segundoOperando);
				division = dividir(primerOperando, segundoOperando);
				multiplicacion = multiplicar(primerOperando, segundoOperando);
				resultadoFactorialUno = factorial(primerOperando);
				resultadoFactorialDos = factorial(segundoOperando);


				if (division == -1) {
					printf("\n Error: No es posible dividir por cero.\n Por favor reintente nuevamente con un numero valido.\n");
					opcion = 5;
				} else if (banderaPrimerOpcion == 0) {
					printf("\n Error: Primero debe introducir primer operando para realizar operaciones.Reintente nuevamente.\n");
				} else if (banderaSegundaOpcion == 0) {
					printf("\n Error: Es necesario introducir el segundo operando para realizar operaciones. Reintente nuevamente.\n");
				}
				else{
					printf("Operaciones correctamente realizadas.\n Para visualizar los resultados, elija opción 4 como se indica en el MENU.\n");
				};
				banderaTercerOpcion = 1;
				break;

			case 4:
				if (banderaTercerOpcion){
				printf("\nA El resultado de A + B es: %d", suma);
				printf("\nB El resultado de A - B es: %d", resta);
				printf("\nC El resultado de A/B es: %f", division);
				printf("\nD El resultado de A*B es: %d", multiplicacion);
					if(resultadoFactorialUno == -1 || resultadoFactorialDos == -1){
						printf("\n Error: NO es posible calcular el factorial de un numero negativo\n Por favor reintente nuevamente. \n");
					} else if(resultadoFactorialUno != 0 || resultadoFactorialDos != 0 ){
					printf("\nE El factorial del primer operando %d es: %d \n El factorial del segundo operando %d es: %d \n", primerOperando, resultadoFactorialUno, segundoOperando, resultadoFactorialDos);
					flagPrimerOperando = 0;
					flagSegundoOperando = 0;
					}else {
						printf("\nERROR: Para obtener los resultados antes debe realizar operaciones selecionando la opción 3 del MENU.\n");
					}
				}
				break;

			case 5:
				printf("Saliendo del programa...");
				break;

			default:
				fflush(stdout);
				printf("Caracter no valido.");
				break;
		}
	}
	while(opcion!=5);

	return EXIT_SUCCESS;
}






