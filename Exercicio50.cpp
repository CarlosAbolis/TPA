/*
Fun��o: Realiza uma opera��o se o usu�rio digitar 1, ou sai caso digite 0.
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
	float numero = 0, sair = 1;
	while(sair == 1){
		printf("Insira um n�mero para saber seu quadrado, ou digite 0 para fechar o programa:\n");
		scanf("%f", &numero);
		if(numero != 0){
			printf("O quadrado do n�mero � %2.f \n \n", numero * numero);
		}
		else{
		sair = 0;
	}
	system("pause");
	}
}
