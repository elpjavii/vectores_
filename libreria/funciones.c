/*
 * funciones.c
 *
 *  Created on: 24 oct 2023
 *      Author: elpjavii
 */
#include <math.h>
float maximo(float n1, float n2){
	if (n1 > n2){
		return n1;
	}
	return n2;
}
float minimo(float n1, float n2){
	if (n1 > n2){
		return n2;
	}
	return n1;
}

// Mostrar un primo
int primo(int nume){
	int i;
		if (nume <= 1){
			return 0;
		}
		for (i = 2 ; i < nume/2; i++){
			if ((nume % i) == 0){
				return 0;
			}
		}
		return 1;
}
//goldbach
void goldbach(int su, int *uno, int *dos){
	int i = -1, x = *uno, m = 0;

	if (x != 1){
		x = *uno;
		x++;
	}

	while(i != su && x < su){
		if(primo(x) && primo(su - x)){
			m = su - x;
			i = x + (su - x);
			*uno = x;
			*dos = su - x;
		}
//		printf("%d----\n", i);
		 x++;
	}
}
//perfecto
int perfecto(int nu){
	int i, x = 0;
	for(i = 0; i < nu; i++){
		if(nu % i == 0){
			x = x + i;
		}
	}
	if(x == nu) return 1;
	return 0;
}

// ejercicios de segundo grado
int ecucacion(int a, int b, int c){
	return (-a * pow(2,2)) + (b * 2) + c;
}

int ecuacion2(int a, int b, int c, double *sol1, double *sol2){
	int x;
	x = pow(b,2) - 4 * a * c;
	if(x < 0){
		*sol1 = *sol2 = 0;
		return 0;
	}else if(x == 0){
		*sol1 = (-b + sqrt(x))/(2*a);
		*sol2 = *sol1;
		return 1;
	}else{
		*sol1 = (-b + sqrt(x))/(2*a);
		*sol2 = (-b - sqrt(x))/(2*a);
		return 2;
	}

}

int juego(int jug1, int jug2){
	int x = 0;
	if(jug1 == jug2){
		return x;
	}
	if((jug1 == 0 && jug2 == 2)  || (jug1 == 1 && jug2 == 0)  ||  (jug1 == 2 && jug2 == 1)){
		x = -1;
	}else{
		x = 1;
	}
	return x;
}
int devuelve(char n[10]){
	int x;
	if(strcmp(n,"piedra") == 0){
		x = 0;
	}else if(strcmp(n,"papel") == 0){
		x = 1;
	}else{
		x = 2;
	}
	return x;
}
float sumaArticulos(int articulo, int unidadesArticulo){
	float v;
	if(articulo == 1) v = unidadesArticulo * 9.90;
	if(articulo == 2) v = unidadesArticulo * 10;
	if(articulo == 3) v = unidadesArticulo * 1.30;
	if(articulo == 4) v = unidadesArticulo * 2,10;
	return v;
}
