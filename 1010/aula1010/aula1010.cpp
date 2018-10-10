// aula1010.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
void HelloWorld()
{
	printf("Hello World!\n\n");
}

int Soma2Valores(int a, int b)
{
	int c;
	c = a + b;
	return c;
}

int LerValorInteiro()
{
	int variavel;
	printf("\nDigite um valor: ");
	scanf_s("%i", &variavel);
	return variavel;
}

int main()
{
	HelloWorld();

	int primeiroValor = LerValorInteiro();
	int segundoValor = LerValorInteiro();

	int resultado = Soma2Valores(primeiroValor, segundoValor);
	printf("Resultado: %i\n\n", resultado);
	system("pause");
	return 0;
}

