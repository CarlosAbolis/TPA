/*
Fun��o: Ler 2 valores somar os n�meros inteiros entre eles.
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
	int numero1 = 0, i = 0, numero2 = 0, alternar = 0, somaI = 0;
	printf("Insira um n�mero: \n");
	scanf("%i", &numero1);
	printf("Insira um n�mero: \n");
	scanf("%i", &numero2);
	if(numero1 > numero2){
		alternar = numero1;
		numero1 = numero2;
		numero2 = alternar;
	}
	for(i = numero1 + 1; i < numero2; i++){
		somaI = somaI + i;
	}
    printf("%i \n", somaI);
    system("pause");
        }
