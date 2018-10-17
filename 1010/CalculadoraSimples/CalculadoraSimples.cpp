// CalculadoraSimples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

float Soma(float a, float b){
	return a + b;
}
float Subtracao(float a, float b){
	return a - b;
}
float Multiplicacao(float a, float b){
	return a * b;
}
float Divisao(float a, float b){
	return a / b;
}
float LendoValores(){
	float variavel;
	printf("\nDigite um valor: \n");
	scanf_s("%f", &variavel);
	return variavel;
}
float main(){
	float primeiroValor = LendoValores();
	float segundoValor = LendoValores();
	printf("\nResultado da soma dos valores: %f", Soma(primeiroValor, segundoValor));
	printf("\nResultado da subtracao dos valores: %f", Subtracao(primeiroValor, segundoValor));
	printf("\nResultado da multiplicacao dos valores: %f", Multiplicacao(primeiroValor, segundoValor));
	printf("\nResultado da divisao dos valores: %f\n", Divisao(primeiroValor, segundoValor));
	system("pause");
}