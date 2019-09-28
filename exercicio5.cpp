/*
Função: Calcular a área e o valor de um terreno
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int area = 0, base = 0, altura = 0, valor = 0, preco = 0;
	setlocale (LC_ALL,"");
	printf ("Insira a base do seu terreno: \n");
	scanf ("%i", &base);
	printf ("Insira a altura do seu terreno: \n");
	scanf ("%i", &altura);
	printf ("Insira o preço do seu terreno: \n");
	scanf ("%i", &preco);
	area = base * altura;
	valor = area * preco;
	printf ("A área do seu terreno é: %i\n", area);
	printf ("O valor dele em m² é: R$ %i\n", valor);
	system("pause");
}
