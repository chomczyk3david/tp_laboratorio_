/*
 * Input.c
 *
 *  Created on: 16 oct. 2021
 *      Author: 54113
 */


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "Input.h"

int PedirNumeros(char mensaje[], char mensajeError[], int min,int max)
{
	int numero;
	printf("%s",mensaje);
	scanf("%d", &numero);
		while(numero < min || numero > max)
		{
			printf("%s",mensajeError);
			scanf("%d", &numero);
		}
	return numero;
}

float PedirFlotante(char mensaje[], char mensajeError[], int min,int max)
{
	float numero;
	printf("%s",mensaje);
	scanf("%f", &numero);
		while(numero < min || numero > max)
		{
			printf("%s",mensajeError);
			scanf("%f", &numero);
		}
return numero;
}
void getString(char cadena[],char mensaje[],int tam)
{
    char auxiliar[tam];
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%[^\n]", auxiliar);
    strcpy(cadena, auxiliar);

}
