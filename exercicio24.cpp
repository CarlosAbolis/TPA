/*
Fun��o: Ler dois n�meros e mostrar o maior.
Carlos Alberto Gon�alves da Silva Neto 19629
Data de Cria��o: 2019/10/27
Data de Finaliza��o: 2019/10/27
*/ 

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	int numero1 = 0, numero2 = 0;
	setlocale (LC_ALL,"");
	printf ("Insira um primeiro n�mero: \n");
	scanf ("%i", &numero1);
	printf ("Insira um segundo n�mero, ser� exibido o maior valor:");
	scanf ("%i", &numero2);
	if (numero1 > numero2){
	printf ("O maior valor �: %i \n", numero1);
}
	else if (numero2 > numero1) {
	printf("O maior valor �: %i", numero2,"\n");
	}
	
	else (numero1 = numero2);
	printf("Os valores s�o iguais.");
	system("pause");
}
