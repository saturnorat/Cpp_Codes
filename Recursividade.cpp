/*
	Name: Recursividade.cpp
	Author: Logan Maia
	Date: 20/10/25 09:29
	Description: programa para demonstrar a utilização das funções recursivas
*/
#include <stdio.h>
int Fx(int);
void Fy(char);
main()
{
	puts("Inicio das chamadas recursivas: ");
	Fx(5);
	puts("Fim da Fx");
	Fy('a');
	puts("\nFim da Fy");
}

int Fx(int a)
{
	if(a > 57)
		return a;
	a = a + 2;
	printf("a: %d \n", a);
	Fx(a); //chamada recursiva
}

void Fy(char c)
{
	if(c == 'z')
		return;
		
	printf("c: %c \n", c);
	c++;
	Fy(c);
}

