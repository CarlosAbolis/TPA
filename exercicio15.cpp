/*
Fun��o: L� o raio e exibe comprimento da circunfer�ncia, sua �rea e volume
Autor: Carlos Alberto Gon�alves da Silva Neto
Data de cria��o:01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float raio = 0, comprimento = 0, area = 0, volume = 0, pi = 0;
	setlocale (LC_ALL,"");
	printf ("Insira o raio da circunfer�ncia em cent�metros: \n");
	scanf ("%f", &raio);
	pi = 3.14;
	comprimento = 2 * pi * raio;
	area = pi * (raio * raio);
	volume = (4/3) * pi * (raio * raio * raio);
	printf ("O comprimento da circunfer�ncia �: %f \n", comprimento, "cm");
	printf ("A �rea da circunfer�ncia �: %f \n", area, "cm�");
	printf ("O volume da circunfer�ncia �: %f \n", volume, "cm�");
	system("pause");
}
