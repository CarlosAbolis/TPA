/*
Fun��o: Ler 10 valores exibir o maior deles.
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
	int numero = 0, i = 0, maior = 0;
	for(i = 0; i < 10; i ++){
	    printf("Insira um n�mero: \n");
	    scanf("%i",&numero);
		if(numero == 1){
		   maior = numero;
	}	else if(numero > maior){
		   maior = numero;
	}
	        
        }
        printf("O maior desses n�mero � %i \n", maior);
        system("pause");
  }
