/*
Fun��o: Crie um algoritimo que mostre se um n�mero � par ou impar.
Autor: Carlos Alberto Gon�alves da Silva Neto
Data de cria��o: 2019/12/01
Data de finaliza��o: 2019/12/01
*/

#include<locale.h>
#include<iostream>

int main(){
	setlocale(LC_ALL,"");
	int numero = 0;
	printf("Insira um n�mero, ser� exibe se ele � par ou �mpar: \n");
	scanf("%i", &numero);
	if(numero == 0){
		printf("O n�mero %i � igual a zero, logo � nulo \n", numero);
	}else if(numero %2== 0){
		printf("O n�mero %i � par \n", numero);
	}else{
		printf("O n�mero %i � impar \n",numero);
	}
	system("pause");
}
