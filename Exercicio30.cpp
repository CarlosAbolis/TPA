/*
Função: Exibe exclusivamente a tabuada do número 7.
Autor: Carlos Alberto Gonçalves da Silva Neto
Data: 2019/12/01
Data de alteração: 2019/12/01
*/

#include<iostream>
#include<locale.h>

int main(){
	int numero = 0;
	setlocale(LC_ALL,"");
	for(numero = 0;numero <= 10; numero++){
		printf("%i x 7 = %i \n", numero, numero*7);
	}
}
