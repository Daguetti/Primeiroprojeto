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
float LVR(){
	float valor = 0;
	printf("\nDigite um numero real (utlilizando ponto): \n");
	scanf_s("%f", &valor);
	return valor;}
float media(float a, float b, float c, float d){
	float media = (a + b + c + d) / 4;
	return media;}
void IVMQM(float a, float b, float c, float d){
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
		printf("\n%.2f \n", d);}}
void ExemploSwitch(){
	printf("\nEscolha uma opcao: \n");
	printf("1 - a\n2 - b\n3 - c\n4 - d\n");
	int op = 0;
	scanf_s("%i", &op);
	switch (op){
	case 1:
		printf("Voce escolheu a\n");
		break;
	case 2:
		printf("Voce escolheu b\n");
		break;
	case 3:
		printf("Voce escolheu c\n");
		break;
	case 4:
		printf("Voce escolheu d\n");
		break;
	default:
		printf("opcao invalida\n");
		break;}}
int main(){
	/*int primeiro = LendoValores();
	int segundo = LendoValores();
	int terceiro = LendoValores();
	int quarto = LendoValores();
	int m = MVI(primeiro, segundo, terceiro, quarto);
	printf("\nO maior valor encontrado foi: %i\n", m);
	float primeiroReal = LVR();
	float segundoReal = LVR();
	float terceiroReal = LVR();
	float quartoReal = LVR();
	IVMQM(primeiroReal, segundoReal, terceiroReal, quartoReal);*/
	ExemploSwitch();
	system("pause");}