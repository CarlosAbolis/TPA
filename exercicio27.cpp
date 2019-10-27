/*
Função: Ler uma idade e indicar a faixa etária.
Carlos Alberto Gonçalves da Silva Neto 19629
Data de Criação: 2019/10/27
Data de Finalização: 2019/10/27
*/ 

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int idade = 0;
	setlocale (LC_ALL,"");
	printf ("Insira sua idade: \n");
	scanf ("%i", &idade);
	if(idade >= 5 and idade <= 11){
		printf("Sua faixa etária é infantil: \n");
	}
	else if(idade >= 12 and idade <= 17){
		printf("Sua faixa etária é juvenil: \n");
	}
	else if(idade >= 18){
		printf("Sua faixa etária é adulto: \n");
	}
	else if(idade < 5){
		printf("Ainda é um bebê: \n");
	}
	
	system("pause");
}
