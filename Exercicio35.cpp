/*
Função: Ler e exibir o quadrado de 5 números.
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação: 2019/12/01
Data de finalização: 2019/12/01
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	int nota1 = 0, nota2 = 0, i = 0;
	char nome[50];
	setlocale(LC_ALL, "");
	for(i = 0; i < 5 ; i ++){
		printf("Insira o nome do aluno: \n");
		scanf("%s", &nome);
		printf("Insira a sua nota do 1º semestre: \n");
		scanf("%i", &nota1);
		printf("Insira a sua nota do 2º semestre: \n");
		scanf("%i", &nota2);
		printf("A média do aluno(a) %s é %i \n", nome, (nota1+nota2)/2);
	} 
	system("pause");
}
        
