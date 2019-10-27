/*
Função: Ler um número e indicar se ele é positivo, negativo ou igual a zero
Carlos Alberto Gonçalves da Silva Neto 19629
Data de Criação: 2019/10/23
Data de Finalização: 2019/10/23
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float numero = 0;
	setlocale (LC_ALL,"");
	printf ("Insira um número: \n");
	scanf ("%f", &numero);
	if (numero > 0){
		printf("O valor indicado: %f \n", numero);
		printf("é positivo \n");
	}
	else if (numero < 0){
		printf("O valor indicado: %f \n", numero);
		printf("é negativo \n");
	}
	else{
		printf("O valor indicado: %f \n", numero);
		printf("é igual a zero \n");
	}
	system("pause");
}
