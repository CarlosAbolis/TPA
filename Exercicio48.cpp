/*
Função: Ler dois valores e permitir o usuário escolher uma operação matemática.
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação: 2019/12/01
Data de finalização: 2019/12/04
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "");
	float numero1 = 0, numero2 = 0;
	int codigo = 0;
	printf("Insira um 1º número: \n");
	scanf("%f", &numero1);
	printf("Insira um 2º número: \n");
	scanf("%f", &numero2);
	printf("\nQual operação deseja realizar com os números inseridos?\n");
	printf("Código | Operação\n"); 
	printf("   1   |    +    \n");
	printf("   2   |    -    \n"); 
	printf("   3   |    X    \n"); 
	printf("   4   |    ÷    \n\n");
	scanf("%i", &codigo);
	switch(codigo){
		case 1:
			numero1 = numero2 + numero1;
			printf("\nA soma dos números é: %2.f\n\n",numero1);
			break;
			
		case 2: numero1 = numero1 - numero2;
			printf("\nA subtração dos números é: %2.f\n\n",numero1);
			break;
		
		case 3: numero1 = numero1 * numero2;
			printf("\nA multiplicação dos números é: %2.f\n\n",numero1);
			break;
		
		case 4: numero1 = numero1 / numero2;
			printf("\nA divisão dos números é: %2.f\n\n",numero1);
			break;
		
		default: 
			printf("\nNúmero inválido\n\n");
			break;
		
}
	system("pause");
}
