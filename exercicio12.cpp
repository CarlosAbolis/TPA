/*
Fun��o: Calcular a idade pela data de nascimento
Autor: Carlos Alberto Gon�alves da Silva Neto
Data de cria��o:01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int anoA = 0, mes = 0, ano = 0, idade = 0, dias = 0;
	setlocale (LC_ALL,"");
	printf ("Insira o ano atual: \n");
	scanf ("%i", &anoA);
	printf ("Insira o ano em que nasceu: \n");
	scanf ("%i", &ano);
	idade = anoA - ano;
	dias = idade * 365;
	printf ("Sua idade �: %i\n", idade);
	printf ("Voc� tem o seguinte n�mero em dias de vida: %i \n", dias);
	system("pause");
}
