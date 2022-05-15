/* Autor: Andriks Imanol Ruiz Martínez, Realizado: 03/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa 
Materia: Programación Estructrada 
Ciclo: 01/2022

Este es un programa en Lenguaje C de la materia de Programación Estructurada<br>
Muestra el uso de:
  
    -Variables flotantes
    -printf para mostrar mensajes y variables
    -scanf
    -El uso de include para las librerías
    -uso de la librería math.h
    -Comentarios para la documentación interna del programa
	*/	
#include <stdio.h>
#include<math.h>
int main() {
	//Declaración de variable
float r, a, v;
	//Entrada de datos
	printf("Área de la esfera \n");
	printf("Introduce el radio de la esfera: ");
	scanf("%f", &r);
	//proceso
	a=(4)*M_PI*pow(r,2);
	//Salida
	printf("El area de la esfera es %f", a);
	
	printf("volumen de la esfera \n");
	//Entrada de los datos
	printf("Introduce el volumen de la esfera: ");
	scanf("%f", &r);
	//proceso
	v=(4)*M_PI*pow(r,3)/3;
	//Salida
	printf("El volumen de la esfera es %f", v);
	return 0;
}
