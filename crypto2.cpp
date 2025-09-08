/*
	Name: crypto2.cpp
	Author: Logan Maia
	Date: 08/09/25 07:54
	Description: programa para cifrar uma mensagem realizando o "merge"
	entre dois vetores de caracteres
*/
#include <stdio.h>

//sessão de prototipação
void merge(char [], char []);

//variáveis globais
int i, j;
char crypto[40]; //junção dos dois vetores

main()
{
	i = j = 0;
	char nome[20]; //nome completo
	char docs[20]; //cpf e rg
	
	printf("Digite seu nome completo: ");
	gets(nome);
	
	printf("Informe seu CPF e RG: ");
	gets(docs);
	
	merge(nome, docs); //invoke da função
	
	puts("\nTexto cifrado: ");
	for(j = 0; crypto[j] != '\0'; j++)
		printf("%c", crypto[j]);
	
}

//função para realizar a mistura "merge" entre os dois vetores
void merge(char nome[], char docs[]) //criando novas variáveis 
{
	for(i = 0; nome[i] != '\0'; i++)
	{
		crypto[j] = nome[i];
		crypto[j + 1] = docs[i];
		j = j + 2;
	}
}//fim do programa

