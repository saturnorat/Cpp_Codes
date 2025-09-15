/*
	Name: nomeContraVet.cpp
	Author: logan Maia
	Date: 15/09/25 09:01
	Description: programa que lê o nome, armazena em um vetor e passar numa função para imprimi-lo ao contrário
*/
#include <stdio.h>
//sessão de prototipação
void imprimirNomeContrario(int, char*);
main()
{
	char nome[20];
	int tam = sizeof(nome)/sizeof(int);
	
	printf("Escreva seu nome: ");
	gets(nome);
	
	//invoke 
	imprimirNomeContrario(tam, nome);
	
}//fim do programa

void imprimirNomeContrario(int tam, char *nome)
{
	for(int i = tam-1; nome[i] !='\0'; i--)
		printf("%c", nome[i]);
}
