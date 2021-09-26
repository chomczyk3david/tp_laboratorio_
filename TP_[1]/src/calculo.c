/*
 * calculo.c
 *
 *  Created on: 25 sep. 2021
 *      Author: 54113
 */


#include <stdio.h>
#include "input.h"


void CargaOperador(int* Operador,char mensaje[])
{
    *Operador=PedirNumeroEntero(mensaje);
}



int MenuOpciones(int banderaA, int operador1,int banderaB, int operador2)
{
    int opcionElegida;

        printf("---CALCULADORA----TP1\n\n");
        if(banderaA==0)
        {
            printf("1-ingrese 1er operador(A= x)\n");
        }else{
             printf("1-ingrese 1er operador(A= %d)\n",operador1);
        }

        if(banderaB==0)
        {
             printf("1-ingrese 2do operador(B= y)\n");
        }else{
             printf("1-ingrese 1er operador(B= %d)\n",operador2);
        }
        printf("3-Calcular las Operaciones:\n");
        printf("4-Informar Resultado:\n");
        printf("5-Salir\n");

        printf("==Elija una opcion==\n");
        scanf("%d", &opcionElegida);

    return opcionElegida;
}


void Calculo(int numero1 ,int numero2 , int* resultadoSuma, int* resultadoResta,  int* resulProducto)
{


    * resultadoSuma = numero1 + numero2;
    *resultadoResta = numero1 - numero2;
    *resulProducto = numero1 * numero2;


}
float CalculoDivision(float numero1, float numero2, float* resulDivision)
{
    int retorno =0;

    *resulDivision =(float) numero1 / numero2;

    return retorno;
}




void Calculofactorial(int numero2 , int* resFactorial)
{

    if(numero2 == 0|| numero2 ==1)
    {
        *resFactorial = 1;
    }
    else
    {
        *resFactorial = numero2 * Calculofactorial(numero2-1);
    }

}
