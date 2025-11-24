/*
	Name: ex4_somaMatriz.cpp
	Author: Logan Maia
	Date: 24/11/25 08:45
	Description: Programa que faz a soma entre 2 matrizes quadradas
*/
#include <stdio.h>
//void somaMatriz(int[][], int[][])
main()
{
	/*int m1[][] ={{1, 2, 3},
				 {4, 5, 6},
				 {7, 8, 9}};
				  
	int m2[][] ={{2, 3, 4},
				 {4, 5, 6},
				 {7, 8, 9}};
				 */
	
	int m1[3][3];
	int m2[3][3];
	int soma[3][3];
	
	printf("Digite os elementos para a matriz A: ");
	for(int i = 0; i < 3; i ++){
		for(int j = 0; j < 3; j ++){
			scanf("%d", &m1[i][j]);
		}
		printf("\n");
	}
	
	printf("Digite os elementos para a matriz B: ");
	for(int i = 0; i < 3; i ++){
		for(int j = 0; j < 3; j ++){
			scanf("%d", &m2[i][j]);
		}
		printf("\n");
	}
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			soma[i][j] = m1[i][j] + m2[i][j];
		}
	}
	
	for(int i = 0; i < 3; i ++){
		for(int j = 0; j < 3; j ++){
			printf("%d ", soma[i][j]);
		}
		printf("\n");
	}
}


