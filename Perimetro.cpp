/*
	Name: Perimetro.cpp
	Author: Logan Maia
	Date: 11/03/25 12:04
	Description: programa que calcula e exibe perimetro de um circulo
*/

#include <stdio.h>

main(){
	
	float raio, perimetro;
	raio = 0.0;
	perimetro = 0.0;
	
	printf("Digite o valor do raio do circulo: ");
	scanf("%f",&raio);
	perimetro = 2 * 3.1416 * raio;
	
	printf("O perimetro eh: %f", perimetro);
	
}//fim
