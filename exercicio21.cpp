/*
Fun��o: Ler um n�mero e indicar se ele � positivo, negativo ou igual a zero
Carlos Alberto Gon�alves da Silva Neto 19629
Data de Cria��o: 2019/10/23
Data de Finaliza��o: 2019/10/23
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float numero = 0;
	setlocale (LC_ALL,"");
	printf ("Insira um n�mero: \n");
	scanf ("%f", &numero);
	if (numero > 0){
		printf("O valor indicado: %f \n", numero);
		printf("� positivo \n");
	}
	else if (numero < 0){
		printf("O valor indicado: %f \n", numero);
		printf("� negativo \n");
	}
	else{
		printf("O valor indicado: %f \n", numero);
		printf("� igual a zero \n");
	}
	system("pause");
}
