/*
Fun��o: Ler a m�dia de um aluno e exibir se o mesmo foi aprovado.
Autor: Carlos Alberto Gon�alves da Silva Neto
Data de cria��o: 2019/12/01
Data de finaliza��o: 2019/12/01
*/

#include<locale.h>
#include<iostream>

int main(){
	setlocale(LC_ALL,"");
	int media = 0;
	char aluno[40];
	printf("Insira o nome do aluno: \n");
	gets(aluno);
	printf("Insira a m�dia do aluno: \n");
	scanf("%i", &media);
	if (media >= 7){
		printf("O aluno %s foi aprovado, pois sua m�dia foi maior que 7 \n", aluno);
	}else{
		printf("O aluno %s foi reprovado, pois sua m�dia foi menor que 7 \n", aluno);
	}
	system("pause");
}
