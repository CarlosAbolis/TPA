/*
Fun��o: Ler tr�s n�meros e mostrar em ordem.
Carlos Alberto Gon�alves da Silva Neto 19629
Data de Cria��o: 2019/10/27
Data de Finaliza��o: 2019/10/27
*/ 

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int numero1 = 0, numero2 = 0, numero3 = 0;
	setlocale (LC_ALL,"");
	printf ("Insira um primeiro n�mero: \n");
	scanf ("%i", &numero1);
	printf ("Insira um segundo n�mero:");
	scanf ("%i", &numero2);
	printf ("Insira um terceiro n�mero, eles ser�o exibidos em ordem crescente:");
	scanf ("%i", &numero3);
	if(numero1 <= numero2 and numero2 <= numero3){
		printf("Resultado: %i, %i, %i", numero1 , numero2 , numero3);
	}
	else if(numero1 <= numero3 and numero3 <= numero2){
		printf("Resultado: %i, %i, %i", numero1 , numero3 , numero2);
	}
	else if(numero2 <= numero1 and numero1 <= numero3){
		printf("Resultado: %i, %i, %i", numero2 , numero1 , numero3);
	}
	else if(numero2 <= numero3 and numero3 <= numero1){
		printf("Resultado: %i, %i, %i", numero2 , numero3 , numero1);
	}
	else if(numero3 <= numero1 and numero1 <= numero2){
		printf("Resultado: %i, %i, %i", numero3 , numero1 , numero2);
	}
	else if(numero3 <= numero2 and numero2 <= numero1){
		printf("Resultado: %i, %i, %i", numero3 , numero2 , numero1);
	}
	
	system("pause");
}
