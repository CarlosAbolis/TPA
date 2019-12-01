/*
Função: Crie um algoritimo que mostre se um número é par ou impar.
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação: 2019/12/01
Data de finalização: 2019/12/01
*/

#include<locale.h>
#include<iostream>

int main(){
	setlocale(LC_ALL,"");
	int numero = 0;
	printf("Insira um número, será exibe se ele é par ou ímpar: \n");
	scanf("%i", &numero);
	if(numero == 0){
		printf("O número %i é igual a zero, logo é nulo \n", numero);
	}else if(numero %2== 0){
		printf("O número %i é par \n", numero);
	}else{
		printf("O número %i é impar \n",numero);
	}
	system("pause");
}
