/*
	Name: Palindromo.cpp
	Author: Logan Maia
	Date: 01/09/25 08:48
	Description: Programa que identifica se uma sequencia de caracteres é ou não um palindromo
*/
#include <stdio.h>

main()
{
	char palavra[20];
	
	printf("Digite a palavra: ");
	gets(palavra);
	
	int i, j, fim, flag;
	for(i = 0; palavra[i] != '\0'; i++)
		fim++;
	
	
	j = fim-1;
	flag = 1; //inicia como verdadeiro
	
	for(i = 0; i < j; i++)
	{
		if(palavra[i] != palavra[j])
		{
			flag = 0; //recebe falso
			break;
		} 
		j--;
	}
	
	if(flag == 1)
	{
		printf("Um palindromo!!!");
	}else
	{
		printf("Nao e palindromo :(");
	}
	
}//fim do programa
