/*
	Name: RecursosC.cpp
	Author: Logan Maia
	Date: 17/11/25 07:51
	Description: Programa para demonstrar alguns recursos da linguagem C
*/
#include <stdio.h>
#include <conio.h>
main()
{
	char tecla;
	while(tecla != 13)
	{
		tecla = getch(); //Aguarda o usuário pressionar uma tecla - com o e ele dá echo no caractere		
		printf("%d", tecla);
	}
	
	
}//fim do programa
