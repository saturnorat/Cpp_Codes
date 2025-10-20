/*
	Name: fibonacciRecursividade.cpp
	Author: Logan Maia				
	Date: 20/10/25 10:18
	Description: Programa que mostra a quantidade de elementos Fibonacci
	que o usuário deseja, usando recursividade direta
*/

#include <stdio.h>
int Fibonacci(int);
int main() {
	int qtd;

	printf("Digite a quantidade de elementos q vc quer : ");
	scanf("%d", &qtd);

	printf("Fibonacci :\n", qtd);
	for (int i = 0; i < qtd; i++) {
		printf("%d ", Fibonacci(i));
	}
	printf("\n");

	return 0;
}

int Fibonacci(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}

