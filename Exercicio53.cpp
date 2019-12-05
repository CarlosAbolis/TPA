/*
Função: Ler um número e exibir a soma dos valores ímpares de um até o valor inserido.
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação: 2019/12/01
Data de finalização: 2019/12/05
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "");
	int numero1 = 0, numero2 = 0, numero3 = 1;
	printf("Insira um número: \n");
	scanf("%i", &numero1);
	while(numero3 <= numero1){
		if(numero3 % 2 == 1){
			numero2 = numero2 + numero3;
		}
	numero3 = numero3 + 1;
	}
	printf("\nA soma dos números ímpares de 1 até o valor inserido é: %i\n\n", numero2);
	system("pause");	
}
