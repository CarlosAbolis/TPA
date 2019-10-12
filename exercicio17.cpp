/*
Função: Recebe um valor em horas, minutos e segundos e exibe o resultado em segundos
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação:01/10/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	float hora = 0, minuto = 0, segundo = 0, resultado = 0, horaS = 0, minutoS = 0;
	setlocale (LC_ALL,"");
	printf ("Insira o valor em horas: \n");
	scanf ("%f", &hora);
	printf ("Insira o valor em minutos: \n");
	scanf ("%f", &minuto);
	printf ("Insira o valor em segundos: \n");
	scanf ("%f", &segundo);
	horaS = hora * 3600;
	minutoS = minuto * 60;
	resultado = horaS + minutoS + segundo;
	printf ("O valor em segundos desses dados é: %f \n", resultado, "m²");
	system("pause");
}
