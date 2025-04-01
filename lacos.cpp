/*
	Name: lacos.cpp
	Author: Logan Maia
	Date: 01/04/25 09:53
	Description: Programa para demonstrar a utilização dos 3 tipos de laços de repetição
*/
#include <stdio.h>

main()
{
	int num = 0; 
	int cont;
	
	printf("Digite um valor: "); 
	scanf("%d", &num);
	
	//REPITA... ATÉ
	cont = 0; //inicializando o contador
	do
	{
		printf("Fatec Santana de Parnaiba | "); //pipe --> |
		cont = cont + 1; //incremento
	}while(cont < num);
	//executa pelo menos uma vez
	////////////////////////////////////////////
	
	//ENQUANTO.. FAÇA
	cont = 0; //inicializando o contador
	while (cont < num)
	{
		printf("\nFazendinha");
		cont++; //abreviacao de cont = cont + 1 (incremento)
	}
	///////////////////////////////////////////
	
	puts(""); //pula linha
	//PARA...FAÇA
	for(cont = 0; cont < num; cont++)
	{
		puts("Ar Condicionado por favor!!!");
	}
	
}//fim do programa

