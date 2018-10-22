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
int main(){
	int primeiro = LendoValores();
	int segundo = LendoValores();
	int terceiro = LendoValores();
	int quarto = LendoValores();
	int m = MVI(primeiro, segundo, terceiro, quarto);
	printf("\nO maior valor encontrado foi: %i\n", m);
	system("pause");
    return 0;}