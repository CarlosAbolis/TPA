/*
Fun��o: Ler 5 valores e coloc�-los em ordem crescente e decrescente.
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
	int numero[5], i, dc = 4, alternar, ordem1 = 1, ordem2 = 1;
	printf("O programa vai ler 5 valores e exibir a ordem crescente e decrescente deles.\n");
	for(i = 0; i < 5; i ++){
		printf("\nInsira um n�mero: \n");
		scanf("%i", &numero[i]);
	}
	while(dc >= 0){
		for(i = 0; i < 4; i ++){
			if(numero[i] > numero[i + 1]){
				numero[i + 1] = alternar;
				numero[i] = numero[i + 1];
				alternar = numero[i];
			}	
		}
		dc --;
	}
	printf("\nOrdem crescente: \n");
	for(i = 0; i < 5; i ++){
		printf("%i� %i \n", ordem1 ++, numero[i]);
	}
	
	printf("\nOrdem decrescente: \n");
	for(i = 4; i > -1; i --){
		printf("%i� %i \n", ordem2 ++, numero[i]);
	}
	system("pause");
}
