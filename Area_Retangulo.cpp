 /*
	Name: Area_Retangulo.cpp
	Author: Logan Maia
	Date: 11/03/25 11:29
	Description: Programa para calcular a area de um retangulo
*/

#include <stdio.h>

main()
{
	float base, altura, area; //ponto flutuante
	base = 0.0; 
	altura = 0.0;
	area = 0.0;
	
	printf("Digite a base do retangulo: ");
	scanf("%f",&base);
	printf("Digite a altura do retangulo: ");
	scanf("%f",&altura);
	
	area = base * altura;
	printf("A area do retangulo eh: %.3f", area);		
	
}//fim do programa

