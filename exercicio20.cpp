/*
Função: Ler dois valores e trocá-los
Carlos Alberto Gonçalves da Silva Neto 19629
Data de Criação: 2019/10/23
Data de Finalização: 2019/10/23
*/ 

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int a = 0, b = 0, troca = 0;
	setlocale (LC_ALL,"");
	printf ("Insira um primeiro número: \n");
	scanf ("%i", &a);
	printf ("Insira um segundo número: \n");
	scanf ("%i", &b);
	troca = a;
	a = b;
	b = troca;
	printf("Os valores foram trocados, o primeiro: %i \n", a);
	printf("E o segundo: %i \n", b);
	system("pause");
}
