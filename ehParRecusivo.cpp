/*
	Name: ehPar.cpp
	Author: Logan Maia
	Date: 03/11/25 10:40
	Description: 
*/
#include <stdio.h>
void testePar(int);
void ehPar(int);
main()
{
	int num = 0;
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	testePar(num);
}

void testePar(int n)
{
	if(n % 2 == 0)
		ehPar(n);
		
	else
		printf("\nCubo do numero: %d", n * n * n);
}

void ehPar(int n)
{
	if(n >= 100)
	{
		return;
	}
	else
		n = n + 2;
		printf("\n%d", n);
		ehPar(n);
}
