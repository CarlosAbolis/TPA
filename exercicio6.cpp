/*
Fun��o: Calcular uma presta��o com taxa de atraso
Autor: Carlos Alberto Gon�alves da Silva Neto
Data de cria��o: 30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float prestacao = 0, valor = 0, taxa = 0, tempo = 0;
	setlocale(LC_ALL, "");
	printf ("Insira o valor total da sua compra: \n");
	scanf ("%f", &valor);
	printf ("Insira a taxa de atraso da sua presta��o por dia, em reais: \n");
	scanf ("%f", &taxa);
	printf ("Insira o tempo que voc� atrasou a presta��o \n");
	scanf ("%f", &tempo);
	prestacao = valor + (valor + (taxa/100) * tempo);
	printf("O valor de sua presta��o com juros � de: %f \n", prestacao);
	printf ("\n");
	system("pause");
}
