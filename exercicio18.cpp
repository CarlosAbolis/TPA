/*
Função: Recebe um valor em segundos e exibe em horas minutos e segundos
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação:01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float horas = 0, minutos = 0, segundos = 0;
	setlocale (LC_ALL,"");
	printf ("Insira o valor em segundos: \n");
	scanf ("%f", &segundos);
	horas = segundos / 3600;
	minutos = segundos / 60;
	printf ("O valor em horas, minutos e segundos desses segundos é: %f %f %f \n", horas, minutos , segundos, "m²");
	system("pause");
}
