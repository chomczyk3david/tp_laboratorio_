/*
 * empleado.h
 *
 *  Created on: 16 oct. 2021
 *      Author: 54113
 */

#ifndef EMPLEADO_H_
#define EMPLEADO_H_



#endif /* EMPLEADO_H_ */

#define OCUPADO 0
#define LIBRE 1

typedef struct
{
	int idEmpleado;
	char apellido[50];
	char nombre[50];
	float sueldo;
	char sector[50];
	int isEmpty;
} eEmpleado;

int CargarEmpleados(eEmpleado lista[], int largo,int* id);
void MostrarTodosLosEmpleados(eEmpleado lista[], int largo);
void MostrarUnEmpleado(eEmpleado unEmpleado);
eEmpleado IngresarUnEmpleado(void);
void OrdenarPorSector(eEmpleado lista[], int largo);
void MostrarPorSector(eEmpleado lista[], int largo, char sector[]);
int ContarPorSector(eEmpleado lista[], int largo, char sector[]);
int CalcularPromedioDeSueldos(eEmpleado lista[], int largo, float* sueldo);
int ModificarEmpleado(eEmpleado lista[], int largo);

