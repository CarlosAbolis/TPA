/*
Fun��o: Ler dois valores e troc�-los
Carlos Alberto Gon�alves da Silva Neto 19629
Data de Cria��o: 2019/10/23
Data de Finaliza��o: 2019/10/23
*/ 

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int a = 0, b = 0, troca = 0;
	setlocale (LC_ALL,"");
	printf ("Insira um primeiro n�mero: \n");
	scanf ("%i", &a);
	printf ("Insira um segundo n�mero: \n");
	scanf ("%i", &b);
	troca = a;
	a = b;
	b = troca;
	printf("Os valores foram trocados, o primeiro: %i \n", a);
	printf("E o segundo: %i \n", b);
	system("pause");
}
