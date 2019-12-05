/*
Fun��o: Ler dois valores e permitir o usu�rio escolher uma opera��o matem�tica.
Autor: Carlos Alberto Gon�alves da Silva Neto
Data de cria��o: 2019/12/01
Data de finaliza��o: 2019/12/04
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "");
	float numero1 = 0, numero2 = 0;
	int codigo = 0;
	printf("Insira um 1� n�mero: \n");
	scanf("%f", &numero1);
	printf("Insira um 2� n�mero: \n");
	scanf("%f", &numero2);
	printf("\nQual opera��o deseja realizar com os n�meros inseridos?\n");
	printf("C�digo | Opera��o\n"); 
	printf("   1   |    +    \n");
	printf("   2   |    -    \n"); 
	printf("   3   |    X    \n"); 
	printf("   4   |    �    \n\n");
	scanf("%i", &codigo);
	switch(codigo){
		case 1:
			numero1 = numero2 + numero1;
			printf("\nA soma dos n�meros �: %2.f\n\n",numero1);
			break;
			
		case 2: numero1 = numero1 - numero2;
			printf("\nA subtra��o dos n�meros �: %2.f\n\n",numero1);
			break;
		
		case 3: numero1 = numero1 * numero2;
			printf("\nA multiplica��o dos n�meros �: %2.f\n\n",numero1);
			break;
		
		case 4: numero1 = numero1 / numero2;
			printf("\nA divis�o dos n�meros �: %2.f\n\n",numero1);
			break;
		
		default: 
			printf("\nN�mero inv�lido\n\n");
			break;
		
}
	system("pause");
}
