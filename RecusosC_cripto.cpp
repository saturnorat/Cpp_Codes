/*
	Name: RecursosC_cripto.cpp
	Author: Logan Maia
	Date: 17/11/25 08:19
	Description: 
*/
#include <stdio.h>
#include <conio.h>
main()
{
	char vetor[100] = {0};
	char tecla;
	int i;
	while(tecla != 13)
	{
		tecla = getch(); //Aguarda o usuário pressionar uma tecla - com o e ele dá echo no caractere		
		printf("%d", tecla);
		vetor[i] = tecla;
		i++;	
		
	}

   	printf("\n\nCaracteres armazenados:\n");
    printf("%s\n", vetor);


}//fim do programa
