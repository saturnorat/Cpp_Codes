/*
	Name: fibonacci.cpp
	Author: Logan Maia
	Date: 06/10/25 09:49
	Description: Programa para exibir a sequência de Fibonacci
*/
#include <stdio.h>
main()
{
	long int ant, atual, prox, qtdElementos;
	prox = qtdElementos = 0;
	ant = 1;
	atual = 1;
	printf("Quantos elementos da sequencia Fibonacci deseja ver? ");
	scanf("%lld", &qtdElementos);
	puts("Sequencia gerada: \n");
	printf("%lld, %lld, ", ant, atual);
	while(qtdElementos-2 > 0)
	{
		prox = atual + ant;
		ant = atual;
		atual = prox;
		printf("%lld, ", prox);
		qtdElementos--;
	}
}//fim do programa
