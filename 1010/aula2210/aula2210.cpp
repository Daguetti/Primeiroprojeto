#include "stdafx.h"
#include <stdlib.h>
int MVI(int a, int b, int c, int d){
	int maior = a;
	if (maior < b){
		maior = b;}
	if (maior < c){
		maior = c;}
	if (maior < d){
		maior = d;}
	return maior;}

int LendoValores(){
	int valor = 0;
	printf("\nDigite um numero inteiro: \n");
	scanf_s("%i", &valor);
	return valor;}

float LVR()
{
	float valor = 0;
	printf("\nDigite um numero real (utlilizando ponto): \n");
	scanf_s("%f", &valor);
	return valor;
}

float media(float a, float b, float c, float d){
	float media = (a + b + c + d) / 4;
	return media;}

void IVMQM(float a, float b, float c, float d)
{
	float med = media(a, b, c, d);

	printf("\nO valor da media eh: %.2f\n", med);
	printf("\nOs valores maiores que a media sao:\n");

	if (a > med){
		printf("\n%.2f ", a);}
	if (b > med){
		printf("\n%.2f ", b);}
	if (c > med){
		printf("\n%.2f ", c);}
	if (d > med){
		printf("\n%.2f \n", d);}
}

int main(){
	//int primeiro = LendoValores();
	//int segundo = LendoValores();
	//int terceiro = LendoValores();
	//int quarto = LendoValores();
	//int m = MVI(primeiro, segundo, terceiro, quarto);
	//printf("\nO maior valor encontrado foi: %i\n", m);

	float primeiroReal = LVR();
	float segundoReal = LVR();
	float terceiroReal = LVR();
	float quartoReal = LVR();

	IVMQM(primeiroReal, segundoReal, terceiroReal, quartoReal);

	system("pause");
    return 0;}