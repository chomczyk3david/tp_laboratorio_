/*
 ============================================================================
 Name        : TP_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "Input.h"
#include "Empleado.h"

#define TAM 2
#define OCUPADO 0
#define LIBRE 1


int main(void)
{
	setbuf(stdout, NULL);
	eEmpleado listaEmpleados[TAM];
	int opcion;
	int testers;
	float promedio;
	int nuevoId;
	nuevoId = 1000;

	do
	{
		printf("\n1. ALTAS\n2. MODIFICAR\n3. Mostrar Analistas\n4. Contar Tester\n5. Mostrar promedio de sueldos.\n6. Salir\n");
		opcion = PedirNumeros("Ingrese una opcion: ","Error ingrese numero correcto",1,6);
		switch (opcion)
		{
			case 1:

				if(CargarEmpleados(listaEmpleados, TAM,&nuevoId)==0)
				{
				    printf("se pudo hacer la carga exitosa:%d", nuevoId);
				}else{
				    printf("no se ingresaron ningun dato:");
				}
			break;

			case 2:
			    OrdenarPorSector(listaEmpleados, TAM);
				MostrarTodosLosEmpleados(listaEmpleados, TAM);
				if(!ModificarEmpleado(listaEmpleados, TAM))
				{
				    printf("se logro modificar la lista:\n");
				}else{
				    printf("no hubo cambios:");
				}
			break;
			case 3:
			    MostrarPorSector(listaEmpleados, TAM,"sector");
			break;

			case 4:
	            testers = ContarPorSector(listaEmpleados, TAM,"tester");
	            if(testers == 0)
	            {
	                printf("\nNo hay testers.\n");

	            }
	            else
	            {
    	           printf("\nLa cantidad de testers es: %d\n", testers);
    	        }

			break;

			case 5:
				if(CalcularPromedioDeSueldos(listaEmpleados, TAM, &promedio) == 1)
					{
					printf("\nEl promedio de sueldos es: %.2f\n", promedio);
					}
				else
				{
					printf("\nNo se pudo calcular el promedio.\n");
				}
			break;
				}

	} while (opcion != 6);
	printf("gracias por utilizar el menu!!");

	return EXIT_SUCCESS;
}
