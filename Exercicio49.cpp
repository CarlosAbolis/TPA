/*
Fun��o: Ler e exibir o nome de 50 pessoas.
Autor: Carlos Alberto Gon�alves da Silva Neto
Data de cria��o: 2019/12/01
Data de finaliza��o: 2019/12/04
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "");
	char nome[50];
	int ordem = 1;
	while(ordem <= 50){
		printf("Informe o nome da %i� pessoa:\n", ordem);
		scanf("%s", &nome);
		ordem = ordem + 1;
		printf("\nO nome dessa pessoa �: %s\n\n", nome);
	}
	system("pause");
}
