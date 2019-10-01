/*
Função: Ler o salário de um funcionário e seu aumento, mostrar o salário atual e a diferença entre os dois
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação:30/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float salario1 = 0, aumento = 0, diferenca = 0, salario2 = 0, porcentagem = 0;
	setlocale (LC_ALL,"");
	printf ("Insira o valor de seu salário: \n");
	scanf ("%f", &salario1);
	printf ("Insira o aumento dele, em porcentagem: \n");
	scanf ("%f", &aumento);
	porcentagem = salario1 * (aumento / 100);
	salario2 = salario1 + porcentagem;
	diferenca = salario2 - salario1;
	printf ("Seu salário atual é: R$ %f\n", salario2);
	printf ("Seu salário antigo era: R$ %f\n", salario1);
	printf ("A diferença entre eles é de: R$ %f\n", diferenca);
	system("pause");
}
