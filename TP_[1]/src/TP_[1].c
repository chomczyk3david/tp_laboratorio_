/*
 ============================================================================
 Name        : TP_[1].c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include "calculo.h"
#include "input.h"
#define T 2
int main()
{
    int MenuOpciones;
   // int vec[T];
    int operandoUno;
    int operandoDos;
    int resultadoSuma;
    int resultadoResta;
    int resulProducto;
    float resulDivision;
    int resFactorial1;
    int resFactorial2;
    char salir ='s';

    int banderaOperandoX;
    int banderaOperandoY;
    int banderaCalculo=0;
    banderaOperandoX =0;
    banderaOperandoY =0;

        do {
            switch(MenuOpciones(banderaOperandoX, operandoUno,banderaOperandoY,operandoDos))
            {
            case 1:
                 CargaOperador( &operandoUno,"Ingrese primer operando\n");

                 banderaOperandoX=1;
            break;
            case 2:
             if(banderaOperandoX ==0)
                {
                    printf("Error, Debe ingresar el primer operando ANTES\n\n");
                }else
                {
                    CargaOperador( &operandoDos,"Ingrese segundo operando\n");
                    banderaOperandoY=1;
                }
            break;

            case 3:
                if(banderaOperandoX ==0 && banderaOperandoY==0)
                {
                        printf("Error, debe ingresar los operandos antes de calcular\n\n");
                }
                else
                {
                    printf("\tCalcular todas las operaciones \n\n");
                    Calculo(operandoUno,operandoDos,&resultadoSuma,&resultadoResta,&resulProducto);
                    CalculoDivision(operandoUno, operandoDos,&resulDivision);

                    Calculofactorial(operandoUno,&resFactorial1);
                    Calculofactorial(operandoDos,&resFactorial2);

                    banderaCalculo =1;
                }
            break;

            case 4:

                if(banderaCalculo ==1)
                {
                    //funcion mostrar pasar todo x parametros
                }
                else
                {
                    printf("mostar resultado hacer calculo");
                }
            break;
            case 5:
                    printf("salir\n");
            break;
        }


        }while(salir !=5);

    return 0;
}
