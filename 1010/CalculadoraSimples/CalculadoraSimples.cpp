// CalculadoraSimples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

float Soma(float a, float b)
{
	float c;
	c = a + b;
	return c;
}

float Subtracao(float a, float b)
{
	float c;
	c = a - b;
	return c;
}

float Multiplicacao(float a, float b)
{
	float c;
	c = a * b;
	return c;
}

float Divisao(float a, float b)
{
	float c;
	c = a / b;
	return c;
}

float LendoValores()
{
	float variavel;
	printf("\nDigite um valor: \n");
	scanf_s("%f", &variavel);
	return variavel;
}

float main()
{
	float primeiroValor = LendoValores();
	float segundoValor = LendoValores();

	float resultado = Soma(primeiroValor, segundoValor);
	printf("\nResultado da soma dos valores: %f", resultado);
	resultado = Subtracao(primeiroValor, segundoValor);
	printf("\nResultado da subtracao dos valores: %f", resultado);
	resultado = Multiplicacao(primeiroValor, segundoValor);
	printf("\nResultado da multiplicacao dos valores: %f", resultado);
	resultado = Divisao(primeiroValor, segundoValor);
	printf("\nResultado da divisao dos valores: %f\n", resultado);
	system("pause");
    return 0;
}

