/*
	Name: frequencia.cpp
	Author: Logan Maia
	Date: 17/11/25 10:25
	Description: programa que recebe dados (nome, endereço, telefone, idade, altura e sexo) para 5 usuários
	Após cada entrada de dados (apos cada Enter) emitir um Beep
	Ao final de cada indivíduo, emitir um Beep diferente e mais longo
	Ao final de todas as leituraws, um beep diferenciado no final
*/
#include <stdio.h>
#include <windows.h>
#include <conio.h>

main()
{
	char nome[50];
	char endereco[70];
	int tel = 0;
	int idade = 0;
	float altura = 0.0;
	char sexo = ' ';
	int i = 1;
	
	while(i < 5)
	{
		puts("Digite seu nome, endereço, telefone, idade, altura e sexo");
		gets(nome);
		Beep(250, 100);
		gets(endereco);
		Beep(250, 100);
		scanf("%d", &tel);
		Beep(250, 100);
		scanf("%d", &idade);
		Beep(250, 100);
		scanf("%f", &altura);
		Beep(250, 100);
		scanf(" %c", &sexo);
		Beep(100, 100);
		i++;
	}
	Beep(500, 200);
	
}
