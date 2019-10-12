/*
Função: Lê as dimensões de um cômodo, calcula e mostra sua área e potência de iluminação
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação:01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float comprimento = 0, largura = 0, potencia = 0, area = 0, gasto = 0;
	setlocale (LC_ALL,"");
	printf ("Insira o comprimento do seu cômodo: \n");
	scanf ("%f", &comprimento);
	printf ("Insira a largura do seu cômodo: \n");
	scanf ("%f", &largura);
	potencia = 18;
	area = comprimento * largura;
	gasto = potencia * area;
	printf ("A área do seu cômodo é de: %f \n", area, "m²");
	printf ("A potência de iluminação necessária é de: %f \n", gasto, "w");
	system("pause");
}
