/*
Função: Exibir um mês de acordo com o seu número.
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação: 2019/12/01
Data de finalização: 2019/12/03
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "");
	int numero = 0;
	printf("\n+-------------------+\n");
	printf("|1. Janeiro         |\n");
	printf("|2. Fevereiro       |\n");
	printf("|3. Março           |\n");
	printf("|4. Abril           |\n");
	printf("|5. Maio            |\n");
	printf("|6. Junho           |\n");
	printf("|7. Julho           |\n");
	printf("|8. Agosto          |\n");
	printf("|9. Setembro        |\n");
	printf("|10. Outubro        |\n");
	printf("|11. Novembro       |\n");
	printf("|12. Dezembro       |\n");
	printf("+-------------------+\n");
	printf("\nInsira um número correspondente a um mês:\n");
	scanf("%i", &numero);
	switch(numero){
		case 1: 
			printf("\nJaneiro\n\n");
			break;
		
		case 2: 
			printf("\nFevereiro\n\n");
			break;
		
		case 3: 
			printf("\nMarço\n\n");
			break;
			
		case 4: 
			printf("\nAbril\n\n");
			break;
		
		case 5: 
			printf("\nMaio\n\n");
			break;
		
		case 6: 
			printf("\nJunho\n\n");
			break;
		
		case 7:
			printf("\nJulho\n\n");
			break;
		
		case 8: 
			printf("\nAgosto\n\n");
			break;
		
		case 9: 
			printf("\nSetembro\n\n");
			break;
		
		case 10: 
			printf("\nOutubro\n\n");
			break;
		
		case 11: 
			printf("\nNovembro\n\n");
			break;
		
		case 12: 
			printf("\nDezembro\n\n");
			break;
		
		default: 
			printf("\nNúmero inválido\n\n");
			break;
	}
	system("pause");
}
