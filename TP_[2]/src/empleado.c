/*
 * empleado.c
 *
 *  Created on: 16 oct. 2021
 *      Author: 54113
 */


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "Input.h"
#include "Empleado.h"

int CargarEmpleados(eEmpleado lista[], int largo,int* id)
{
    int retorno = 1;
    int i;
    //int ContId =0;
        for (i= 0; i<largo;i++)
    	{
    	     if(lista[i].isEmpty == LIBRE)
    	     {
        	   lista[i] = IngresarUnEmpleado();
        	    retorno =0;
    	     }
    	     *id ++;
    	}
	return retorno;
}

void MostrarTodosLosEmpleados(eEmpleado lista[], int largo)
{
	int i;
	for ( i=0; i<largo; i++)
	{
		MostrarUnEmpleado(lista[i]);
	}
}

void MostrarUnEmpleado(eEmpleado unEmpleado)
{
	printf("%4d %-20s %-20s %10.2f %10s  %10d \n", unEmpleado.idEmpleado, unEmpleado.nombre,
											 unEmpleado.apellido,unEmpleado.sueldo,
											 unEmpleado.sector,unEmpleado.isEmpty);
}
eEmpleado IngresarUnEmpleado(void)
{
	eEmpleado dato;

//	dato.idEmpleado = PedirEntero("Ingrese el id: ","Error ingrese un numero:",1,9999);
	getString(dato.nombre, "Ingrese el nombre del usuario : ", 50);
	getString(dato.apellido, "Ingrese Apellido del usuario : ", 50);
	dato.sueldo = PedirFlotante("Ingrese el sueldo:","Error re ingrese dato valido:",1,99999);
	getString(dato.sector, "Ingrese puesto (Programador - Analista - Tester): ", 50);

	return dato;
}

void OrdenarPorSector(eEmpleado lista[], int largo)
{
    int i;
    eEmpleado aux;
    int j;

    for(i=0;i<largo-1;i++)
    {
        for(j=i+1;j<largo;j++)
        {
            if(strcmp(lista[i].sector,lista[j].sector ) < 0)
            {
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }

        }
    }

}

void MostrarPorSector(eEmpleado lista[], int largo, char sector[])
{
    int i;

    for(i=0;i<largo;i++)
    {
        if(strcmp(lista[i].sector , sector ) == 0)
        {
            MostrarUnEmpleado(lista[i]);
        }

    }
}

int ContarPorSector(eEmpleado lista[], int largo, char sector[])
{
    int i;
    int contador;
    contador = 0;

    for(i=0 ; i<largo; i++)
    {
        if(strcmp(lista[i].sector , sector) == 0)
        {
            contador ++;
        }
    }


    return contador;
}

int CalcularPromedioDeSueldos(eEmpleado lista[], int largo, float* promedio)
{
    int i;
    int retorno;
    retorno = -1;
    float acumuladorSueldos;
    acumuladorSueldos = 0;
    if(promedio!= NULL && lista!= NULL && largo> 0)
    {
        for(i=0; i<largo; i++)
        {
            acumuladorSueldos += lista[i].sueldo;
        }
        retorno = 1;
    }


    *promedio = acumuladorSueldos / largo;

    return retorno;
}
//modificar nombre o apellido o salario o sector
int ModificarEmpleado(eEmpleado lista[], int largo)
{
    int retorno;
    char nombre;
    int i;
    retorno = -1;
    MostrarTodosLosEmpleados(lista, largo);
    nombre = getString(lista[i].nombre,"ingrese nombre",50);
    for(i=0;i<largo;i++)
    {
        if((lista[i].isEmpty == OCUPADO) && lista[i].nombre == nombre )
        {
            getString(lista[i].nombre,"ingrese nombre",50);
            retorno = 1;
            break;
        }
    }
    return retorno;
}
