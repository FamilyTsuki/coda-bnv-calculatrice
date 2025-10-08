#include <stdlib.h>
#include <stdio.h>


int main(){

int n1; 
int n2;


char symbol;

	printf("Choisissez une opération : +, -, *, /, %% : \n");
	scanf("%c", &symbol);

	if(symbol == 43)
	{
		printf("Vous avez choisi d'effectuer une addition\n");
	}
	else if(symbol == 42)
	{
		printf("Vous avez choisi d'effectuer une multiplication\n");
	}
	else if(symbol == 45)
	{
		printf("Vous avez choisi d'effectuer une soustraction\n");
	}
	else if(symbol == 47)
	{
		printf("Vous avez choisi d'effectuer une division\n");
	}
	else if(symbol == 37)
	{
		printf("Vous avez choisi d'effectuer un modulo\n");
	}
	else
	{
		printf("L'opération %c n'existe pas\n", symbol);
	}


		printf("Choisissez un nombre entier : \n");
	scanf("%d", &n1);
	printf("Choisissez un nombre entier : \n");
	scanf("%d", &n2);
if(symbol == 43)
	{
		int resultat = n1 + n2;
	}
	else if(symbol == 42)
	{
		int resultat = n1 * n2;
	}
	else if(symbol == 45)
	{
		int resultat = n1 - n2;
	}
	else if(symbol == 47)
	{
		double resultat = n1 / n2;
	}



}
