/*
Função: Calcular área do retângulo
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int area = 0, base = 0, altura = 0;
	setlocale (LC_ALL,"");
	printf ("Insira o número correspondente a base do seu retângulo: \n");
	scanf ("%i", &base);
	printf ("Insira o número correspondente a altura do seu retângulo: \n");
	scanf ("%i", &altura);
	area = base * altura;
	printf ("A área do seu retângulo é: %i m² \n", area);
	system("pause");
}
