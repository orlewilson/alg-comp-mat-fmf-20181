/*
Disciplina:	Algoritmos Computacionais Matutino
Prof.:		Orlewilson B. Maia
Autor:		Seu nome
Data:		23/04/2018
Descri��o:	Ler dois valores inteiros 
			e mostrar a soma entre eles
*/

// Bibliotecas
#include <stdio.h>

// programa principal
int main()
{
	// declara��o das vari�veis
	int X, // primeiro valor
		Y, // segundo valor
		Z; // soma entre X e Y

	// mostrar mensagem ao usu�rio no console
	printf("Informe o primeiro nro: ");  
    // ler valor informado pelo usu�rio 
	// no console
	scanf("%d", &X);  

	// mostrar mensagem ao usu�rio no console
	printf("Informe o segundo nro: ");  
    // ler valor informado pelo usu�rio 
	// no console
	scanf("%d", &Y);  

	// somar X e Y
	Z = X + Y;
	
	// mostrar o resultado da soma entre X e Y
	printf("A soma entre %d e %d � %d ", X, Y, Z);
	
	return 0;
}


