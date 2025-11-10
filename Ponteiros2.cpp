/*
	Name: Ponteiros2.cpp	
	Author: Logan Maia
	Date: 10/11/25 09:56
	Description: Programa para demonstrar o uso de ponteiros
*/
#include <stdio.h>
main()
{
	int a;
	int *ptrA;
	a = 18;
	ptrA = &a;
	printf("Conteudo de A: %d", a);
	printf("\nEndereco de A: %p", &a);
	
	printf("\nEndereco da variavel ptrA: %p", &ptrA);
	printf("\nConteudo apontado por ptrA: %p", ptrA);
	
}//fim do programa

