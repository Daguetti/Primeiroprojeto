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

float media(float a, float b, float c, float d){
	float media = (a + b + c + d) / 4;
	return media;}

int main(){
	int primeiro = LendoValores();
	int segundo = LendoValores();
	int terceiro = LendoValores();
	int quarto = LendoValores();
	int med = media(primeiro, segundo, terceiro, quarto);
	printf("\nA media dos valores eh: %i\n", med);
	system("pause");
    return 0;}

