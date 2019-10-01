/*
Função: Ler 4 notas e mostra a média entre elas
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0, media = 0;
	setlocale (LC_ALL,"");
	printf ("Insira a sua primeira nota: \n");
	scanf ("%f", &nota1);
	printf ("Insira a sua segunda nota: \n");
	scanf ("%f", &nota2);
	printf ("Insira sua terceira nota: \n");
	scanf ("%f", &nota3);
	printf ("Insira sua quarta nota: \n");
	scanf ("%f", &nota4);
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	printf ("A média dessas notas é: %f\n", media);
	system("pause");
}
