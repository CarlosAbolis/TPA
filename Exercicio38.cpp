/*
Função: Ler 10 valores exibir o maior deles.
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação: 2019/12/01
Data de finalização: 2019/12/01
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"");
	int numero = 0, i = 0, maior = 0;
	for(i = 0; i < 10; i ++){
	    printf("Insira um número: \n");
	    scanf("%i",&numero);
		if(numero == 1){
		   maior = numero;
	}	else if(numero > maior){
		   maior = numero;
	}
	        
        }
        printf("O maior desses número é %i \n", maior);
        system("pause");
  }
