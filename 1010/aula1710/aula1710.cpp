// aula1710.cpp : Defines the entry point for the console application.
//condicionais

#include "stdafx.h"
#include <stdlib.h>


int main()
{
	int a = 5;

	if (true)
	{
		printf("Sempre vai imprimir essa frase\n");
	}
	if (a < 5)
	{
		printf("OPA FION\n");
	}
	else
	{
		printf("Agora sim\n");
	}

	system("pause");
    return 0;
}