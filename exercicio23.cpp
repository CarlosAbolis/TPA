/*
Fun��o: Ler um n�mero e caso seja maior que 5 e menor que 20, exibe seu cubo.
Carlos Alberto Gon�alves da Silva Neto 19629
Data de Cria��o: 2019/10/23
Data de Finaliza��o: 2019/10/23
*/ 

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int numero = 0, resultado = 0;
	setlocale (LC_ALL,"");
	printf ("Insira um n�mero, se ele for maior que 5 e menor que 20 ser� exibido seu cubo: \n");
	scanf ("%i", &numero);
	if (numero > 5 and numero < 20){
	resultado = numero * numero * numero;
	printf ("O n�mero � maior que 5 e menor que 20, seu cubo �: %i \n", resultado);
}
	else {
	printf("O n�mero n�o foi alterado: %i", numero,"\n");
	}
	system("pause");
}
