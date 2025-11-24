/*
	Name: ex1_potencia.cpp
	Author: Logan Maia
	Date: 24/11/25 07:49
	Description: programa em que sejam lidos 2 números inteiros (base e expoente),
	sejam passados para uma função chamada "calcularPotencia(base, exp)"
	e devolva o cálculo da potenciação
*/
#include <stdio.h>
void calcularPotencia(int, int);
main()
{
	int b = 0;
	int e = 0;
	printf("Digite a base: ");
	scanf("%d", &b);
	printf("\nDigite o expoente: ");
	scanf("%d", &e);
	
	calcularPotencia(b, e);
	
}
void calcularPotencia(int base, int exp)
{
	for(int i = 1; i < exp; i++)
		base = base * exp;
		
	printf("A potencia eh: %d", base);
}
