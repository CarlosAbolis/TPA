/*
Função: Ler 10 valores exibir o maior e o menor deles.
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
	int numero = 0, i = 0, maior = 0, menor = 0;
	printf("Insira um número: \n");
	    scanf("%i", &maior);
	    menor = maior;
	for(i = 0; i < 9; i ++){
	    printf("Insira um número: \n");
	    scanf("%i", &numero);
		if(numero > maior){
		   maior = numero;
	}	else if(numero < maior){
		   menor = numero;
	}   
        }
        printf("O maior desses números é %i e o menor deles é %i \n", maior, menor);
        system("pause");
  }
