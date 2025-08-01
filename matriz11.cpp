/*
	Name: matriz1.cpp
	Author: Logan Maia
	Date: 20/05/25 09:43
	Description: Programa para demonstrar operaçoes com matrizes
					Array bidimensional
*/
#include <stdio.h>

main()
{
	
	int mat[3][3]; //matriz quadrada de ordem 3 ////// 3 x 3 (3²)
	int i, j;
	i = j = 0; //inicialização dos índices com valor 0 (i = linha, j = coluna)
	int ordem = 3;
	
	int somaDP = 0;
	int somaDS = 0;
	int somaAcDP = 0;
	int somaAbDP = 0;
	int somaAcDS = 0;
	int somaAbDS = 0;
	
	
	//Conjuntos de laços de repetição para preenchimento em linha fazendo a carga na matriz
	
	do
	{
		do
		{
			printf("Digite um elemento[%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
			j++;	
		}while(j < 3);
	j = 0;
	i++;
	}while(i < 3);
	puts("\n\nMatriz carregada :)");
	
	//imprimir os elementos da Diagonal Principal (DP)
	printf("\nElementos da Diagonal Principal(DP)\n");
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			if(i == j)
			{
				printf("[%d][%d] = %d\n", i, j, mat[i][j]);
					somaDP = somaDP + mat[i][j];
			}
				printf("\nSoma : %d\n", somaDP);
				
	//imprimir os elementos da Diagonal Seundária (DS)
	printf("\nElementos da Diagonal Secundária(DS)\n");
	i = 0;
	while(i < ordem)
	{
		for(j = 0; j < 3; j++)
		{
			if(i + j == ordem - 1)
			{
				printf("[%d][%d] = %d\n", i, j, mat[i][j]);
					somaDS = somaDS + mat[i][j];
			}
		}
	i++;
	}
			printf("\nSoma : %d\n", somaDS);
	//imprimir elementos acima da DP
	i = 0;
	j = 0;
	printf("\nElementos Acima da Diagonal Principal (Acima da DP)\n");
	do
	{
		while(j < ordem)
		{
			if(i < j)
			{
				printf("[%d][%d] = %d\n", i, j, mat[i][j]);
					somaAcDP = somaAcDP + mat[i][j];
			}
		j++;
		}
	j = 0;
	i++;
	}while(i < ordem);
			printf("\nSoma : %d\n", somaAcDP);
	
	//imprimir elementos abaixo da DP
	i = 0;
	printf("\nElementos Abaixo da Diagonal Principal (Abaixo da DP)\n");
	do
	{
		for(j = 0; j < 3; j++)
		{
			if(i > j)
			{
				printf("[%d][%d] = %d\n", i, j, mat[i][j]);
					somaAbDP = somaAbDP + mat[i][j];
			}
		}
	i++;
	}while(i < ordem);
			printf("\nSoma : %d\n", somaAbDP);
		
		
	//imprimir elementos acima da DS
	j = 0;
	printf("\nElementos Acima da Diagonal Secundaria (Acima da DS)\n");
	for(i = 0; i < 3; i++)
	{
		do
		{
			if(i + j < ordem - 1)
			{
				printf("[%d][%d] = %d\n", i, j, mat[i][j]);
					somaAcDS = somaAcDS + mat[i][j];
			}
			j++;
		}while(j < ordem);
	j = 0;
	}
		printf("\nSoma : %d\n", somaAcDS);
		
		
	//imprimir elementos abaixo da DS
	j = 0;
	printf("\nElementos Abaixo da Diagonal Secundaria (Abaixo da DS)\n");
	for(i = 0; i < 3; i++)
	{
		while(j < ordem)
		{
			if(i + j > 2)
			{
				printf("[%d][%d] = %d\n", i, j, mat[i][j]);
					somaAbDS = somaAbDS + mat[i][j];
			}
			j++;	
		}
	j= 0;
	}
		printf("\nSoma : %d\n", somaAbDS);
	
}//fim do programa
