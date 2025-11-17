/*
	Name: RecursosIIC.cpp
	Author: Logan Maia
	Date: 17/11/25 09:47
	Description: programa para emitir sons
*/
#include <stdio.h>
#include <windows.h>
main()
{
	int i = 0;
	int freq = 0; //Frequencia em Hertz
	int tempo = 150; //milissegundos

	
	freq = 100;
	while(i < 20)
	{
	//Beep(frequência em Hz, duração ms);
		Beep(freq, tempo);
		freq = freq + 100;
		i++;
	}
	while(i >=0)
	{
	//Beep(frequência em Hz, duração ms);
		Beep(freq, tempo);
		freq = freq - 100;
		i++;
	}


}//fim do main
