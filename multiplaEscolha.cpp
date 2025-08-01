/*
	Name: multiplaEscolha.cpp
	Author: Logan Maia
	Date: 10/06/25 11:39
	Description: Programa que apresenta uma estrutura múltipla escolha para o usuário
	(switch case)
	normalmente é utilizada para montar menus de opcao
*/
#include <stdio.h>
#include <windows.h>

main()
{
	int opcao;
	
	while(1)//loop infinito pois o numero 1 significa TRUE
	{
		opcao = 0;
		system("cls");//clear screen
		printf("Menu de opcoes: \n");
		printf("=====================\n");
		printf("1 - Aparece o UM\n2 - Mostra o DOIS\n3 - Sera apresentado o TRES\n4 - Finalizar...\n");
		
		printf("===============================\n\n");
		printf("Digite uma opcao: ");
		scanf("%d", &opcao);
		
		//Estrutura de múltipla escolha com switch...case
		switch(opcao)
		{
			case 1: puts("Escolheu o numero 1!");
				break;
				
			case 2: puts("Digitou o 2...");
				break;
				
			case 3: puts("Sua escolha foi a terceira.");
				break;
				
			case 4: puts("O programa foi finalizado!!!");
				break;
			
			default: puts("\nDigitou errado seu energumeno\n");
			
		}//fim do switch
		
		if(opcao == 4)
			exit(0);
		else
			system("pause");
			
	}//fim do while
	
}//fim do programa
