/*
Fun��o: Ler e exibir a m�dia de 50 n�meros.
Autor: Carlos Alberto Gon�alves da Silva Neto
Data de cria��o: 2019/12/01
Data de finaliza��o: 2019/12/01
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "");
	float numero = 0, x = 0, i = 0;
	printf("O programa vai ler 50 n�meros e exibir a m�dia entre eles. \n");
	for(i = 0; i < 50 ; i++){
		printf("Insira um n�mero: \n");
		scanf("%f", &numero);
		x = x + numero;
	}
	printf("A m�dia dos n�meros inseridos �: %f", x/50);
	system("pause");
}


