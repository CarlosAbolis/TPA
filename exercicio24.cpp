/*
Função: Ler dois números e mostrar o maior.
Carlos Alberto Gonçalves da Silva Neto 19629
Data de Criação: 2019/10/27
Data de Finalização: 2019/10/27
*/ 

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int numero1 = 0, numero2 = 0;
	setlocale (LC_ALL,"");
	printf ("Insira um primeiro número: \n");
	scanf ("%i", &numero1);
	printf ("Insira um segundo número, será exibido o maior valor:");
	scanf ("%i", &numero2);
	if (numero1 > numero2){
	printf ("O maior valor é: %i \n", numero1);
}
	else if (numero2 > numero1) {
	printf("O maior valor é: %i", numero2,"\n");
	}
	
	else (numero1 = numero2);
	printf("Os valores são iguais.");
	system("pause");
}
