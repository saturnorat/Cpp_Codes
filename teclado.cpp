/*
	Name: 
	Author: Logan Maia
	Date: 17/11/25 10:14
	Description: Programa que ao clicar nas teclas do teclado são emitidos seus sons, usando beep e /a
*/
#include <stdio.h>
#include <windows.h>
#include <conio.h>


main()
{
	int i = 0;
	int freq = 0; //Frequencia em Hertz
	int tempo = 100; //milissegundos
	
	char tecla = 0;
	while(tecla != 13)
	{
		tecla = getch();
		Beep(tecla*25, 50);
	}

	
}//fim do programa
