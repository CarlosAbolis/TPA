/*
Função: Conversor de Celsius em Farenheit
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação:01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float celsius = 0, resultado = 0;
	setlocale (LC_ALL,"");
	printf ("Insira o valor da temperatura em celsius: \n");
	scanf ("%f", &celsius);
	resultado = celsius * 1.8 + 32;
	printf ("%f",celsius);
	printf ("º graus Celsius é equivalente à: %f\n", resultado, "%f Farenheit");
	system("pause");
}
