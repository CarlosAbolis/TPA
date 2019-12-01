/*
Função: Ler a média de um aluno e exibir se o mesmo foi aprovado.
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação: 2019/12/01
Data de finalização: 2019/12/01
*/

#include<locale.h>
#include<iostream>

int main(){
	setlocale(LC_ALL,"");
	int media = 0;
	char aluno[40];
	printf("Insira o nome do aluno: \n");
	gets(aluno);
	printf("Insira a média do aluno: \n");
	scanf("%i", &media);
	if (media >= 7){
		printf("O aluno %s foi aprovado, pois sua média foi maior que 7 \n", aluno);
	}else{
		printf("O aluno %s foi reprovado, pois sua média foi menor que 7 \n", aluno);
	}
	system("pause");
}
