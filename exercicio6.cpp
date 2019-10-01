/*
Função: Calcular uma prestação com taxa de atraso
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float prestacao = 0, valor = 0, taxa = 0, tempo = 0;
	setlocale(LC_ALL, "");
	printf ("Insira o valor total da sua compra: \n");
	scanf ("%f", &valor);
	printf ("Insira a taxa de atraso da sua prestação por dia, em reais: \n");
	scanf ("%f", &taxa);
	printf ("Insira o tempo que você atrasou a prestação \n");
	scanf ("%f", &tempo);
	prestacao = valor + (valor + (taxa/100) * tempo);
	printf("O valor de sua prestação com juros é de: %f \n", prestacao);
	printf ("\n");
	system("pause");
}
