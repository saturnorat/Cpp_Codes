/*
	Name: ex3_vetorMatriz.cpp
	Author: Logan Maia
	Date: 24/11/25 08:28
	Description: Faça um programa que carregue um vetor com 9 elementos
	e depois passe-os para uma matriz quadrada. 
	Ao final mostre todo o conteúdo do vetor e da matriz
*/
#include <stdio.h>
main()
{
	int vet[] = {1, 2 , 3, 4, 5 , 6 , 7, 8, 9};
	int mat[3][3];
	int k = 0;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			mat[i][j] = vet[k];
			k++;

		}
	}
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
}
