/*
	Name: ex2_RecursividadeSoma100
	Author: Logan Maia
	Date: 24/11/25 08:16
	Description: Por meio de recursividade direta 
	faça um programa que leia um número inteiro e adicione o 
	seu mesmo valor até atingir o número 100. 
	Retornar quantas vezes foi realizada a soma
*/
#include <stdio.h>
int somar(int);
main()
{
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	somar(num);
}

int somar(int n)
{
	int limite = 100;
	int soma = 1;
	if(n >= limite)
		return n;
	n = n + n;
	soma++;
	printf("%d", soma);
	somar(n);		
	
	
}
