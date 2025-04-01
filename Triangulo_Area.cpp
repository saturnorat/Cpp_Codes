/*
	Name: Triangulo_Area
	Author: Logan Maia
	Date: 11/03/25 12:18
	Description: programa que calcula a area de um triangulo
*/

#include <stdio.h>

main(){
	
	float base, altura, area;
	base = 0.0;
	altura = 0.0;
	area = 0.0;
	
	printf("Digite a base do triangulo: ");
	scanf("%f", &base);
	printf("Digite a altura do triangulo: ");
	scanf("%f", &altura);
	
	area = (base * altura) / 2;
	printf("A area do triangulo eh: %f", area);
	
}//fim

