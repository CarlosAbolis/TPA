/*
Função: Ler e exibir o nome de 5 pessoas.
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação: 2019/12/01
Data de finalização: 2019/12/01
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	int n = 0;
	setlocale(LC_ALL, "");
	char nome[50];
	for(n = 1; n < 5; n ++){
		printf("Insira um nome: ");
		scanf("%s",&nome);
		printf("%s \n",nome);	
	}
	system("pause");
}
