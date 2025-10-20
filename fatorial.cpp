/*
	Name: fatorial.cpp
	Author: Loga Maia
	Date: 20/10/25 09:51
	Description: Programa para exibir fatorial
	de um número por meio de uma função recursiva direta
*/
#include <stdio.h>
int Fatorial(int);
main()
{
	int num, fat;
	printf("Digite um numero para calcular seu fatorial: ");
	scanf("%d", &num);
	
	fat = Fatorial(num);
	printf("\nFatorial de %d = %d",num, fat);
}//fim do programa

//função para calcular o fatorial de um número
int Fatorial(int num)
{
	if(num == 1)
		return num;//pra cair fora
		
	return num * Fatorial(num - 1);
}


