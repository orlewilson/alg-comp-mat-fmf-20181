/*
Disciplina:	Algoritmos Computacionais Matutino
Prof.:		Orlewilson B. Maia
Autor:		Seu nome
Data:		16/04/2018
Descri��o:	Ler um valor e mostrar o valor lido ao usu�rio
*/

// Bibliotecas
#include <stdio.h>

// programa principal
int main()
{
    // vari�vel que receber� o valor informado pelo usu�rio
	int x;

    // mostrar mensagem ao usu�rio no console
	// printf() = escreva(), imprima()
	printf("Informe um numero: ");  
    
    // ler valor informado pelo usu�rio no console
	// scanf() = leia()
	// "%d" = ler� um n�mero inteiro
	scanf("%d", &x);  
    
    // mostrar valor lido ao usu�rio no console
    printf("Voce informou: %d", x);
    return 0;
}
