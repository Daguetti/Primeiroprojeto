#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
/*void Switch2(){
	printf("\nDigite um numero inteiro: \n");
	int n = 0;
	scanf_s("%i", &n);
	int resto = n % 5;
	switch (resto){
	case 0:
		printf("O valor %i eh divisivel por 5", n);
		break;
	case 1:
		printf("O resto da divisao de %i por 5 eh %i", n, resto);
		break;
	case 2:
		printf("O resto da divisao de %i por 5 eh %i", n, resto);
		break;
	case 3:
		printf("O resto da divisao de %i por 5 eh %i", n, resto);
		break;
	case 4:
		printf("O resto da divisao de %i por 5 eh %i", n, resto);
		break;}}*/
/*void imposto(){
	float s = 0;
	printf("Digite seu salario (utilizando ponto '.' para separar os centavos): \n");
	scanf_s("%f", &s);
	if (s <= 1903.98){
		printf("Isento de impostos\n");}
	else if (s <= 2826.65){
		float t1 = (s * 0.075) - 142.8;
		printf("Imposto devido: R$%.2f\n", t1);}
	else if (s <= 3751.05){
		float t2 = (s * 0.15) - 354.8;
		printf("Imposto devido: R$%.2f\n", t2);}
	else if (s <= 4664.68){
		float t3 = (s * 0.225) - 636.13;
		printf("Imposto devido: R$%.2f\n", t3);}
	else{
		float t4 = (s * 0.275) - 869.36;
		printf("Imposto devido: R$%.2f\n", t4);}}*/
/*void Exercicio() {
	int pn = 0;
	printf("Digite um numero inteiro: \n");
	scanf_s("%i", &pn);
	int sn = 0;
	printf("Digite outro numero inteiro: \n");
	scanf_s("%i", &sn);
	printf("Os numeros entre os valores digitados sao:\n");
	if (pn > sn) {
		do
		{
			printf("\t%i\n", pn);
			pn--;
		} while (pn >= sn);
	}
	else {
		do
		{
			printf("\t%i\n", pn);
			pn++;
		} while (pn <= sn);
	}
}*/
int LendoValor() {
	int valor = 0;
	printf("Digite um numero inteiro: \n");
	scanf_s("%d", &valor);
	return valor;
}
void Exercicio2() {

	/*int n1 = LendoValor();
	printf("%d", n1);*/

	int numero = 0;
	int anterior = 0;
	int crescente = 1;
	int i = 0;
	while (i < 5)
	{
		numero = LendoValor();

		if (i != 0)
		{
			if (anterior > numero)
			{
				crescente = 0;
			}
		}
		anterior = numero;
		i++;
	}
}
int main() {



	//Exercicio();
	//LendoValor();
	Exercicio2();
	//Switch2();
	//imposto();
	system("pause");
	return 0;
}