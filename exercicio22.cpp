/*
Função: Ler um número e verificar se ele é maior que 100, caso se somar 150 e exibir o resultado.
Carlos Alberto Gonçalves da Silva Neto 19629
Data de Criação: 2019/10/23
Data de Finalização: 2019/10/23
*/ 

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int numero = 0, resultado = 0;
	setlocale (LC_ALL,"");
	printf ("Insira um número, se ele for maior que 100, será somado a ele 100: \n");
	scanf ("%i", &numero);
	if (numero > 100){
	resultado = numero + 100;
	printf ("O número foi maior que 100, esse é o resultado: %i \n", resultado);
}
	else {
	printf("O número não foi alterado: %i", numero,"\n");
	}
	system("pause");
}
