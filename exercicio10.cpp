/*
Função: Realizar o cálculo de IMC
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação:30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float massa = 0, altura = 0, imc = 0, tamanho = 0;
	setlocale (LC_ALL,"");
	printf ("Insira a sua massa: \n");
	scanf ("%f", &massa);
	printf ("Insira a sua altura em centímetros: \n");
	scanf ("%f", &tamanho);
	altura = tamanho / 100;
	imc = massa / (altura * altura);
	printf ("Seu IMC é: %f\n", imc);
	system("pause");
}
