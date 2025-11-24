/*
	Name: ex5_IMC.cpp
	Author: Logan Maia
	Date: 24/11/25 09:15
	Description: Em uma função que retorne o valor float, 
	calcule o IMC de uma pessoa. Após isso, 
	submeta a uma outra função que classifique esse IMC
*/
#include <stdio.h>
float calculaIMC(float, float, float);
float classificaIMC(float);
main()
{
	float peso = 0;
	float altura = 0;
	float imc = 0;
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	printf("\nDigite sua altura: ");
	scanf("%f", &altura);
	
	imc = calculaIMC(peso, altura, imc);
	classificaIMC(imc);
	printf("\nSeu IMC eh: %f", imc);
	
}
float calculaIMC(float peso, float altura, float imc)
{
	imc = (peso / (altura * altura));
	
	return imc;
}
float classificaIMC(float imc)
{
	if(imc < 18.5)
		printf("\nAbaixo do peso!");
	else if(imc >= 18.5 && imc < 24.9)
		printf("\nPeso ideal!");
	else if(imc >= 25)
		printf("\nExcesso de peso!");
		
	return 0;
}
