/*
Fun��o: Ler o sal�rio de um funcion�rio e seu aumento, mostrar o sal�rio atual e a diferen�a entre os dois
Autor: Carlos Alberto Gon�alves da Silva Neto
Data de cria��o:30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float salario1 = 0, aumento = 0, diferenca = 0, salario2 = 0, porcentagem = 0;
	setlocale (LC_ALL,"");
	printf ("Insira o valor de seu sal�rio: \n");
	scanf ("%f", &salario1);
	printf ("Insira o aumento dele, em porcentagem: \n");
	scanf ("%f", &aumento);
	porcentagem = salario1 * (aumento / 100);
	salario2 = salario1 + porcentagem;
	diferenca = salario2 - salario1;
	printf ("Seu sal�rio atual �: R$ %f\n", salario2);
	printf ("Seu sal�rio antigo era: R$ %f\n", salario1);
	printf ("A diferen�a entre eles � de: R$ %f\n", diferenca);
	system("pause");
}
