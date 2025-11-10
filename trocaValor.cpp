/*
	Name: trocaValor.cpp
	Author: Logan Maia
	Date: 10/11/25 10:10
	Description: Programa pra trocar valor entre variáveis
*/
#include <stdio.h>
void trocar(int *, int *);
main()
{
	int a, b;
	a = 15;
	b = 1001;
	printf("Valores das variaveis antes da troca: ");
	printf("\nA: %d", a);
	printf("\nB: %d", b);
	trocar(&a, &b);
	printf("\n\nValores das variaveis depois da troca: ");
	printf("\nA: %d", a);
	printf("\nB: %d", b);
	printf("\n\nConteudo das variaveis: \nA: %p", a);
	printf("\nB: %p", b);
}//fim do programa
void trocar(int *a, int *b)
{
	int aux;
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	
}
