/*
Fun��o: Ler um n�mero e verificar se ele � maior que 100, caso se somar 150 e exibir o resultado.
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
	printf ("Insira um n�mero, se ele for maior que 100, ser� somado a ele 100: \n");
	scanf ("%i", &numero);
	if (numero > 100){
	resultado = numero + 100;
	printf ("O n�mero foi maior que 100, esse � o resultado: %i \n", resultado);
}
	else {
	printf("O n�mero n�o foi alterado: %i", numero,"\n");
	}
	system("pause");
}
