/*
Disciplina:	Algoritmos Computacionais Matutino
Prof.:		Orlewilson B. Maia
Autor:		Seu nome
Data:		16/04/2018
Descrição:	Ler um valor e mostrar o valor lido ao usuário
*/

// Bibliotecas
#include <stdio.h>

// programa principal
int main()
{
    // variável que receberá o valor informado pelo usuário
	int x;

    // mostrar mensagem ao usuário no console
	// printf() = escreva(), imprima()
	printf("Informe um numero: ");  
    
    // ler valor informado pelo usuário no console
	// scanf() = leia()
	// "%d" = lerá um número inteiro
	scanf("%d", &x);  
    
    // mostrar valor lido ao usuário no console
    printf("Voce informou: %d", x);
    return 0;
}
