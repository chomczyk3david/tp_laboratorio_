/*
 * input.c
 *
 *  Created on: 25 sep. 2021
 *      Author: 54113
 */


#include <stdio.h>
#include "input.h"


int PedirNumeroEntero(char mensaje[]){
    int numero;

    printf("%s\n",mensaje);
    scanf("%d",&numero);
    return numero;
}
