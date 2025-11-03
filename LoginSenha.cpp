/*
	Name: LoginSenha.cpp
	Author: Logan Maia
	Date: 03/11/25 08:49
	Description: Programa para demonstrar a utilização de recursividade indireta
*/
//Sessão de importação das bibliotecas
#include <stdio.h>
#include <string.h>

//Sessão de prototipação
void verLogin();
void verSenha();

//Variáveis Globais
char login[] = "Logan";
int pwd = 123;
int contLogin = 1;
int contSenha = 0;


main()
{
	verLogin();
}//fim do programa

//Função para verificar se o login está correto
void verLogin()
{
	char user[5];
	printf("Usuario: ");
	gets(user);
	
	if(strcmp(user, login)== 0)//string compare
	{
		contLogin = 0;
		verSenha();
	}
	if(contLogin < 5)
	{
		contLogin++;
		verLogin();
	}
		
	else
	{
		puts("Acesso Bloqueado!!");
		return;
	}
}

//Função para validar a senha do usuário
void verSenha()
{
	int senha = 0;
	printf("\nSenha: ");
	scanf("%d", &senha);
	if(senha == pwd)
		{
			puts("Login efetuado com sucesso!!! :D");
			return;
		}
		contSenha++;
	if(contSenha
	 < 3)
	{
		verSenha();
	}
	else
	{
		puts("Acesso bloqueado! :(");
		verLogin();
	}
}
