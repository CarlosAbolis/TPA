/*
Função: Calcular a soma de três números, e o quadrado desse soma
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int num1 = 0, num2 = 0, num3 = 0, soma = 0, quadrado = 0;
	setlocale (LC_ALL,"");
	printf ("Insira o primeiro número: \n");
	scanf ("%i", &num1);
	printf ("Insira o segundo número: \n");
	scanf ("%i", &num2);
	printf ("Insira o terceiro número: \n");
	scanf ("%i", &num3);
	soma = (num1 + num2 + num3);
	quadrado = soma * soma;
	printf ("A soma dos três números indicados é: %i\n", soma);
	printf ("O quadrado da soma dos três números indicados é: %i\n", quadrado);
	system("pause");
}
