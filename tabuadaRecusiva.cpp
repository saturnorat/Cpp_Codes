/*
	Name: tabuadaRecursiva.cpp
	Author: Logan Maia
	Date: 03/11/25 10:16
	Description: Programa para mostrar na tela a tabuada de
	multiplicação por meio de uma função recursiva direta
*/
#include <stdio.h>
void exibirTabuada(int);

int num = 0; //var global

main()
{
	puts("Impressao na tela de uma tabuada de multiplicacao: ");
	printf("Numero: ");
	scanf("%d", &num);
	puts("====================");
	
	exibirTabuada(1);//levando o 1 pro i
}//fim do programa
void exibirTabuada(int i)
{
	if(i == 11)
		return;
	printf("%d x %d = %d\n", num, i, num*i);
	exibirTabuada(++i);

}
