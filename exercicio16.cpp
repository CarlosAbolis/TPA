/*
Fun��o: L� as dimens�es de um c�modo, calcula e mostra sua �rea e pot�ncia de ilumina��o
Autor: Carlos Alberto Gon�alves da Silva Neto
Data de cria��o:01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float comprimento = 0, largura = 0, potencia = 0, area = 0, gasto = 0;
	setlocale (LC_ALL,"");
	printf ("Insira o comprimento do seu c�modo: \n");
	scanf ("%f", &comprimento);
	printf ("Insira a largura do seu c�modo: \n");
	scanf ("%f", &largura);
	potencia = 18;
	area = comprimento * largura;
	gasto = potencia * area;
	printf ("A �rea do seu c�modo � de: %f \n", area, "m�");
	printf ("A pot�ncia de ilumina��o necess�ria � de: %f \n", gasto, "w");
	system("pause");
}
