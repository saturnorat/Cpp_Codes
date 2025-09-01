/*
	Name: Texto.cpp 
	Author: Logan Maia
	Date: 01/09/25 07:51
	Description: Programa para manipulação de strings
*/
#include <stdio.h>

main()
{
	char resp;
	int idade;
	float altura;
	
	resp = ' ';
	idade = 0;
	altura = 0.0;
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	printf("Digite 'S' ou 'N': ");
	scanf(" %c", &resp);
	
	printf("Idade: ");
	scanf("%d", &idade);
	
	printf("\n\nVoce respondeu: %s", (resp=='s' || resp == 'S')?"Sim":"Nao");
	printf("\nSua idade e: %d", idade);
	printf("\nSua altura e: %f", altura);
}

