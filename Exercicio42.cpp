/*
Fun��o: Exibir o en�simo elemento da constante de Fibonacci.
Autor: Carlos Alberto Gon�alves da Silva Neto
Data de cria��o: 2019/12/01
Data de finaliza��o: 2019/12/02
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "");
	int numero = 0, fibonacci = 1, i = 0, troca1 = 1, troca2 = 0, soma = 0;
	printf("Insira o n�mero de sua posi��o: \n");
	    scanf("%i", &numero);
	for(i = 1; i < numero; i ++){
		fibonacci = troca1 + troca2;
		troca1 = troca2;
		troca2 = fibonacci;				
	}
             printf("O n�mero correspondente a posi��o � %i\n", fibonacci);
        }
