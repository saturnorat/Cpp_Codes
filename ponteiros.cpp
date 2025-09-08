/*
	Name: ponteiros.cpp
	Author: Logan Maia
	Date: 08/09/25 09:55
	Description: programa para demonstrar o conceito e uso dos ponteiros
*/
#include <stdio.h>

main()
{
	int a, b, c;
	a = b = c = 5;
	char respS = 'S';
	char respN = 'N';
	int vet1[7], vet2[4];
	
	printf("Conteudo de A: %d", a);
	printf("\nConteudo de B: %d", b);
	printf("\nConteudo de C: %d", c);
	printf("\nConteudo de respS: %c", respS);
	printf("\nConteudo de respN: %c", respN);
	
	printf("\n\nEndereco da variavel A: %p", &a);
	printf("\nEndereco da variavel B: %p", &b);
	printf("\nEndereco da variavel C: %p", &c);
	
	printf("\nEndereco da variavel respS: %p", &respS);
	printf("\nEndereco da variavel respN: %p", &respN);
	
	printf("\nEndereco do vetor vet1: %p", &vet1);
	printf("\nEndereco do vetor vet2: %p", &vet2);

	printf("\nUltimo endereco do vet1: %p", &vet1[6]);
	
}
