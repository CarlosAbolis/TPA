/*
Função: Lê o raio e exibe comprimento da circunferência, sua área e volume
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação:01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float raio = 0, comprimento = 0, area = 0, volume = 0, pi = 0;
	setlocale (LC_ALL,"");
	printf ("Insira o raio da circunferência em centímetros: \n");
	scanf ("%f", &raio);
	pi = 3.14;
	comprimento = 2 * pi * raio;
	area = pi * (raio * raio);
	volume = (4/3) * pi * (raio * raio * raio);
	printf ("O comprimento da circunferência é: %f \n", comprimento, "cm");
	printf ("A área da circunferência é: %f \n", area, "cm²");
	printf ("O volume da circunferência é: %f \n", volume, "cm³");
	system("pause");
}
