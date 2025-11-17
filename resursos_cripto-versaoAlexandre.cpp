/*
	Name: 
	Author: Logan Maia
	Date: 17/11/25 08:28
	Description: 
*/
#include <stdio.h>
#include <conio.h>
main()
{
	char vetor[7];
	char tecla;
	int i;
	while(tecla != 13)
	{
		tecla = getch(); //Aguarda o usuário pressionar uma tecla - com o e ele dá echo no caractere		
		printf("%d", tecla);
		vetor[i] = tecla;
		i++;	
		
	}

   	puts("\nTexto claro: ");
 //Fazendo com while
/*	i = 0;	
   	while(vetor[i] != 13)
   	{
   		printf("%c", vetor[i]);
		i++;
	}*/
	
	printf("%s", vetor);


}


