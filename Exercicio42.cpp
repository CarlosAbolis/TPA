/*
Função: Exibir o enésimo elemento da constante de Fibonacci.
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação: 2019/12/01
Data de finalização: 2019/12/02
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "");
	int numero = 0, fibonacci = 1, i = 0, troca1 = 1, troca2 = 0, soma = 0;
	printf("Insira o número de sua posição: \n");
	    scanf("%i", &numero);
	for(i = 1; i < numero; i ++){
		fibonacci = troca1 + troca2;
		troca1 = troca2;
		troca2 = fibonacci;				
	}
             printf("O número correspondente a posição é %i\n", fibonacci);
        }
