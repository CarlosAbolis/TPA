/*
Fun��o: Recebe o nome e altura de duas pessoas e exibe a m�dia
Autor: Carlos Alberto Gon�alves da Silva Neto
Data de cria��o:01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float altura1c = 0, altura2c = 0, media = 0, altura1m = 0, altura2m = 0;
	char nome1, nome2;
	setlocale (LC_ALL,"");
	printf ("Insira o nome da primeira pessoa: \n");
	scanf ("%s", &nome1);
	printf ("Insira a altura da primeira pessoa em cent�metros: \n");
	scanf ("%f", &altura1c);
	printf ("Insira o nome da segunda pessoa: \n");
	scanf ("%s", &nome2);
	printf ("Insira a altura da segunda pessoa em centr�metros: \n");
	scanf ("%f", &altura2c);
	altura1m = altura1c / 100;
	altura2m = altura2c / 100;
	media = (altura1m + altura2m) / 2;
	printf ("A m�dia de altura entre esses duas pessoas �: %f \n", media);
	system("pause");
}
