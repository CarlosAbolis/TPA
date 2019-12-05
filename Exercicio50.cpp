/*
Função: Realiza uma operação se o usuário digitar 1, ou sai caso digite 0.
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação: 2019/12/01
Data de finalização: 2019/12/04
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "");
	float numero = 0, sair = 1;
	while(sair == 1){
		printf("Insira um número para saber seu quadrado, ou digite 0 para fechar o programa:\n");
		scanf("%f", &numero);
		if(numero != 0){
			printf("O quadrado do número é %2.f \n \n", numero * numero);
		}
		else{
		sair = 0;
	}
	system("pause");
	}
}
