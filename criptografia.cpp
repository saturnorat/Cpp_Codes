/*
	Name: criptografia.cpp
	Author: Logan Maia
	Date: 01/09/25 10:12
	Description: programa que criptografa duas strings, misturando seus caracteres para criar um texto cifrado
*/
#include <stdio.h>

main()
{
	char nome[20]; //nome completo
	char docs[20]; //cpf e rg
	char crypto[40]; //mistura dos dois
	
	printf("Digite seu nome completo: ");
	gets(nome);
	printf("Digite seu CPF e RG: ");
	gets(docs);
	
	int i, j;
	for(i = 0; nome[i] != '\0'; i++)
	{
		crypto[j] = nome[i];
		crypto[j+1] = docs[i];
		j = j + 2;
	}
	
	puts("Texto cifrado: ");
	for(j = 0; crypto[j] != '\0'; j++)
		printf("%c", crypto[j]);
}//fim do programa
