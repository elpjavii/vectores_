/*
 * funciones.h
 *
 *  Created on: 24 oct 2023
 *      Author: elpjavii
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

	float maximo(float n1, float n2);
	float minimo(float n1, float n2);
	int primo(int pri);
	void goldbach(int su, int *uno, int *dos);
	int perfecto(int nu);
	int ecucacion(int a, int b, int c);
	int ecuacion2(int a, int b, int c, double *sol1, double *sol2);
	int juego(int jug1, int jug2);
	int devuelve(char n[10]);
	//float diaEspectador(int adulto, int niños, float precio);
	float palomitasDescuento(int entradasAdul, int entradasNi, int cantPalomita, float prePalomi, float precioEntrada);
	float sumaArticulos(int articulo, int unidadesArticulo);
#endif /* FUNCIONES_H_ */
