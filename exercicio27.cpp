/*
Fun��o: Ler uma idade e indicar a faixa et�ria.
Carlos Alberto Gon�alves da Silva Neto 19629
Data de Cria��o: 2019/10/27
Data de Finaliza��o: 2019/10/27
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
		printf("Sua faixa et�ria � infantil: \n");
	}
	else if(idade >= 12 and idade <= 17){
		printf("Sua faixa et�ria � juvenil: \n");
	}
	else if(idade >= 18){
		printf("Sua faixa et�ria � adulto: \n");
	}
	else if(idade < 5){
		printf("Ainda � um beb�: \n");
	}
	
	system("pause");
}
