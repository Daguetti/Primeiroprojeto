// Primeiroprojeto.cpp : Defines the entry point for the console application.
//

/*
Krai borracha
mano
*/


#include "stdafx.h"
//C ANSI
#include <stdio.h>
#include <stdlib.h>

//Variáveis Globais
int a; //inteiro
float b; //real (ponto futuante)
double; //real (maior precisão)
bool d; //booleano (verdadeio/falso)



int main()
{
	//Variável local
	int e;

	printf("Hello World!\n\n");

	//imprimindo valores

	printf("%i\n\n", 17);
	printf("%f\n\n", 1.7);

	//texto (string e valor juntos)

	printf("Aqui vai o valor %i, total da soma. \n\n", 10 + 7);

	printf("%i + %i = %i\n\n", 10, 7, 10 + 7);

	a = 10;
	e = 7;
	int f = a + e;

	printf("O resultado da soma eh: %i\n\n", f);

	//leitura SCANF/SCANF_S

	printf("Digite um valor bonitinho: ");
	
	scanf_s("%i", &f);

	printf("\nVoce digitou %i\n\n", f);


	system("pause");

    return 0;
}

