/*
Função: Exibe o quociente e o resto da divisão de dois números
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int quoc = 0, divd = 0, divv = 0, resto = 0;
	setlocale (LC_ALL,"");
	printf ("Insira o dividendo: \n");
	scanf ("%i", &divd);
	printf ("Insira o divisor: \n");
	scanf ("%i", &divv);
	quoc = (divd / divv);
	resto = (divd % divv);
	printf ("O quociente dessa divisão é: %i\n", quoc);
	printf ("O resto dessa divisão é: %i\n", resto);
	system("pause");
}
