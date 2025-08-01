/*
	Name: matrizVetor.cpp
	Author: Logan Maia
	Date: 27/05/25 09:41
	Description: Programa para fazer a carga em uma matriz com ordem deferida pelo usuário e, após a carga passar TODOS os elementos para o vetor (array)
*/
#include <stdio.h>

main()
{
	int lin, col, x;
	int ordem;
	
	lin = col = x = 0;
	
	printf("Escolha a ordem da matriz quadrada: ");
	scanf("%d", &ordem);
	
	int mat[ordem][ordem];
	int vet[ordem * ordem];
	
	//fazer a carga na matriz
	printf("Digite %d elementos inteiros: \n", ordem * ordem);
	
	while(lin < ordem)
	{
		while(col < ordem)
		{
			printf("[%d][%d]: ", lin, col);
			scanf("%d", &mat[lin][col]);
			vet[x] = mat[lin][col];
			col++;
			x++;
		}
	lin++;
	col = 0;
	}//fim da carga da matriz
	
	//exibir todo o conteúdo da matriz
	puts("\n ======> Conteudo da matriz: ");
	puts("==============================");
	lin = 0;
	do
	{
		for(col = 0; col < ordem; col ++)
		{
			printf("[%d][%d]: %d\n", lin,col,mat[lin][col]);
				
		}
	lin++;
	
	}while(lin < ordem);
	
	//exibir todo o conteúdo do vetor
	puts("\n ======> Conteudo do vetor: ");
	puts("==============================");
	
	for(x = 0; x < ordem * ordem; x++)
		printf("%d|", vet[x]);
}//fim do programa 
