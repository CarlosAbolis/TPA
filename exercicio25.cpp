/*
Função: Ler três números e mostrar o maior.
Carlos Alberto Gonçalves da Silva Neto 19629
Data de Criação: 2019/10/27
Data de Finalização: 2019/10/27
*/ 

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int numero1 = 0, numero2 = 0, numero3 = 0;
	setlocale (LC_ALL,"");
	printf ("Insira um primeiro número: \n");
	scanf ("%i", &numero1);
	printf ("Insira um segundo número:");
	scanf ("%i", &numero2);
	printf ("Insira um terceiro número, será exibido o maior valor:");
	scanf ("%i", &numero3);
	if (numero1 > numero2 and numero1 > numero3){
	printf ("O maior valor é: %i \n", numero1);
}
	else if (numero2 > numero1 and numero2 > numero3) {
	printf("O maior valor é: %i \n", numero2,"\n");
	}
	else {
	printf("O maior valor é: %i \n", numero3,"\n");
	}
	
	system("pause");
}
