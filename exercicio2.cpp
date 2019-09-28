/*
Função: Calcular área do triângulo
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float area = 0, base = 0, altura = 0;
	setlocale (LC_ALL,"");
	printf ("Insira o número correspondente a base do seu triângulo: \n");
	scanf ("%f", &base);
	printf ("Insira o número correspondente a altura do seu triângulo: \n");
	scanf ("%f", &altura);
	area = (base * altura) / 2;
	printf ("A área do seu triângulo é: %f m² \n", area);
	system("pause");
}
