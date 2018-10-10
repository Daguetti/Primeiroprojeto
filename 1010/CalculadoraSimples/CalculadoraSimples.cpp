// CalculadoraSimples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

int Soma(int a, int b)
{
	int c;
	c = a + b;
	return c;
}

int Subtracao(int a, int b)
{
	int c;
	c = a - b;
	return c;
}

int Multiplicacao(int a, int b)
{
	int c;
	c = a * b;
	return c;
}

int Divisao(int a, int b)
{
	int c;
	c = a / b;
	return c;
}

int LendoValores()
{
	int variavel;
	printf("\nDigite um valor: \n");
	scanf_s("%f", &variavel);
	return variavel;
}

int main()
{
	int primeiroValor = LendoValores();
	int segundoValor = LendoValores();

	int soma = Soma(primeiroValor, segundoValor);
	printf("\nResultado da soma dos valores: %f", soma);
	int subtracao = Subtracao(primeiroValor, segundoValor);
	printf("\nResultado da subtracao dos valores: %f", subtracao);
	int multiplicacao = Multiplicacao(primeiroValor, segundoValor);
	printf("\nResultado da multiplicacao dos valores: %f", multiplicacao);
	int divisao = Divisao(primeiroValor, segundoValor);
	printf("\nResultado da divisao dos valores: %f\n", divisao);
	system("pause");
    return 0;
}

