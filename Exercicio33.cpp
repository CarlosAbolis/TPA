/*
Fun��o: Ler e exibir a metade de 5 n�meros.
Autor: Carlos Alberto Gon�alves da Silva Neto
Data de cria��o: 2019/12/01
Data de finaliza��o: 2019/12/01
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "");
	int i = 0;
	float numero = 0, divisao = 0;
	for(i = 0; i < 5; i ++){
	    printf("Insira um n�mero: ");
	    scanf("%f", &numero);
		divisao = numero / 2;
             printf("%f \n", divisao);	        
        }
        system("pause");
  }
