/*
Fun��o: Ler 10 valores exibir quantos s�o negativos.
Autor: Carlos Alberto Gon�alves da Silva Neto
Data de cria��o: 2019/12/01
Data de finaliza��o: 2019/12/01
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"");
	int numero = 0, i = 0, n2 = 0;
	for(i = 0; i < 10; i ++){
	    printf("Insira um n�mero: \n");
	    scanf("%i", &numero);
		if(numero < 0){
		   n2 = 1 + n2;
	}
             printf("A quantidade de valores negativos � %i\n", n2);
	        
        }
        system("pause");
  }
