/*
Função: Média ponderada de quatro notas e quatro pesos
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação:01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int media = 0, nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0, peso1 = 0, peso2 = 0, peso3 = 0, peso4 = 0;
	setlocale (LC_ALL,"");
	printf ("Insira a primeira nota: \n");
	scanf ("%i", &nota1);
	printf ("Insira o peso da primeira nota: \n");
	scanf ("%i", &peso1);
	printf ("Insira a segunda nota: \n");
	scanf ("%i", &nota2);
	printf ("Insira o peso da segunda nota: \n");
	scanf ("%i", &peso2);
	printf ("Insira a terceira nota: \n");
	scanf ("%i", &nota3);
	printf ("Insira o peso da terceira nota: \n");
	scanf ("%i", &peso3);
	printf ("Insira a quarta nota: \n");
	scanf ("%i", &nota4);
	printf ("Insira o peso da quarta nota: \n");
	scanf ("%i", &peso4);
	media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3 + nota4 * peso4) / (peso1 + peso2 + peso3 + peso4);
	printf ("A média ponderada desses valores é: %i \n", media);
	system("pause");
}
