/*
Função: Calcular área da circunferência
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float PI = 3.14, raio = 0, area = 0;
	setlocale (LC_ALL,"");
	printf ("Insira o número correspondente ao raio da sua circunferência: \n");
	scanf ("%f", &raio);
	area = raio * raio * PI;
	printf ("A área do seu circunferência é: %f \n", area, "m²");
	system("pause");
}
