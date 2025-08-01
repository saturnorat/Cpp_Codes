/*
	Name: MaiorMenor.cpp
	Author: Logan Maia
	Date: 18/03/25 11:30
	Description: programa para ler dois números inteiros e apontar qual deles é o maior
*/
#include <stdio.h> //STanDard Input Output
#include <locale.h> //biblioteca para localizacao de idiomas

main(){
	setlocale(LC_ALL, "Portuguese");

	int num1, num2;
	num1 = num2 = 0;
	
	puts("Programa para determinar o maior numero lido");
	printf("Digite o primeiro número: "); scanf("%d", &num1);
	printf("Digite o segundo numero: "); scanf("%i", &num2);
	
	if(num1 > num2)
		printf("O maior numero lido eh: %d", num1);
	else if(num2 > num1)
		printf("O maior numero lido eh: %i", num2);
	else
		puts("Os numeros sao iguais!");
}//fim do programa


