/*
Fun��o: Ler um n�mero e exibir a soma dos valores �mpares de um at� o valor inserido.
Autor: Carlos Alberto Gon�alves da Silva Neto
Data de cria��o: 2019/12/01
Data de finaliza��o: 2019/12/05
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "");
	int numero1 = 0, numero2 = 0, numero3 = 1;
	printf("Insira um n�mero: \n");
	scanf("%i", &numero1);
	while(numero3 <= numero1){
		if(numero3 % 2 == 1){
			numero2 = numero2 + numero3;
		}
	numero3 = numero3 + 1;
	}
	printf("\nA soma dos n�meros �mpares de 1 at� o valor inserido �: %i\n\n", numero2);
	system("pause");	
}
