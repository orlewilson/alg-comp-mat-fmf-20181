/*
Disciplina:	Algoritmos Computacionais Matutino
Prof.:		Orlewilson B. Maia
Autor:		Seu nome
Data:		23/04/2018
Descrição:	Informar dois valores inteiros e 
           mostrar qual valor é maior
*/

// Bibliotecas
#include <stdio.h>

// programa principal
int main()
{
	// declarar as variáveis
	int X; // primeiro valor
	int Y; // segundo valor
	
	// informar primeiro valor
	printf("Informe o primeiro valor: ");
	// ler valor informado
	scanf("%d", &X);

	// informar segundo valor
	printf("Informe o segundo valor: ");
	// ler valor informado
	scanf("%d", &Y);

	// comparar os valores
	// if = se, else = senão
	if (X > Y)
	{
		// verdadeiro
		printf("X > Y: %d > %d", X, Y);
	}
	else // senão
	{
		// falso
		printf("Y > X: %d > %d", Y, X);
	} 
	return 0;
}
