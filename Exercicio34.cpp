/*
Fun��o: Ler e exibir o quadrado de 5 n�meros.
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
	int numero = 0, i = 0, quadrado = 0;
	for(i = 0; i < 5 ; i ++){
	    printf("Insira um n�mero: ");
	    scanf("%i", &numero);
		quadrado = numero * numero;
             printf("O quadrado de %i = %i \n", numero, quadrado);
	        
        }
        system("pause");
  }
