/*
	Name: texto2.cpp
	Author: Logan Maia
	Date: 08/09/25 10:40
	Description: programa que demontra o uso de ponteiros
	com tratamento de strings
*/
#include <stdio.h>
#include <string.h>
void inverso(char []);
main()
{
	char nome[20]; int *tam = 0;
	printf("Nome: ");
	gets(nome);
	
	inverso(nome);
	*tam = sizeof(nome) / sizeof(char);
	printf("\nTamanho do vetor: %d", *tam);
	printf("\nNome digitado: %s", nome);
	
	
}//fim do programa

//função para imprimir o nome ao contrário
void inverso(char nome[])
{
	int i = 0;
	for(i = *tam - 1; i > 0; i--)
	{
		printf(nome[i]);
	}
}
