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

int main()
{
	HelloWorld();
	int d = Soma2Valores(99, 101);

	printf("Resultado: %i\n", d);

	system("pause");
    return 0;
}

