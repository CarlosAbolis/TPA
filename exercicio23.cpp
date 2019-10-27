/*
Função: Ler um número e caso seja maior que 5 e menor que 20, exibe seu cubo.
Carlos Alberto Gonçalves da Silva Neto 19629
Data de Criação: 2019/10/23
Data de Finalização: 2019/10/23
*/ 

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int numero = 0, resultado = 0;
	setlocale (LC_ALL,"");
	printf ("Insira um número, se ele for maior que 5 e menor que 20 será exibido seu cubo: \n");
	scanf ("%i", &numero);
	if (numero > 5 and numero < 20){
	resultado = numero * numero * numero;
	printf ("O número é maior que 5 e menor que 20, seu cubo é: %i \n", resultado);
}
	else {
	printf("O número não foi alterado: %i", numero,"\n");
	}
	system("pause");
}
