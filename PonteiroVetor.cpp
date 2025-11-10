/*
	Name: PonteiroVetor.cpp
	Author: Logan Maia
	Date: 10/11/25 10:22
	Description: Programa para manipular passagem 
	de estruturas do tipo vetor para uma função
*/
#include <stdio.h>
void imprimirVetor(int *, int *);
main()
{
	int vet[] = {7, 33, -5, 14, 2};
	printf("Endereço do vetor: %p", &vet[0]);
	printf("\nEndereço do vetor: %p", &vet[1]);
	printf("\nEndereço do vetor: %p", &vet[2]);
	printf("\nEndereço do vetor: %p", &vet[3]);
	printf("\nEndereço do vetor: %p", &vet[4]);
	
	puts("\nConteudo do vetor: ");
	imprimirVetor(vet, &vet[4]);

}//fim do programa

//função para imprimir o conteúdo de um vetor:
void imprimirVetor(int *V, int *vlr)
{
	for(int i = 0; i < 5; i++)
		printf("%d|", V[i] * *vlr);
}
