/*
Disciplina:	Algoritmos Computacionais 
            (matutino)
Prof.:		Orlewilson B. Maia
Autor(a):	Seu nome
Data:		28/05/2018
Descrição:	Verificar se um número é par ou ímpar
*/
// Bibliotecas
#include <stdio.h> 

// declarar função
void parImpar(int num)
{
	if (num % 2 == 0)
	{
		printf("O numero %d e par! \n", num);
	} else {
		printf("O numero %d e impar! \n", num);
	}
}

// Programa Principal
int main()
{
	// variáveis
	int a, b, c;
	
	a = 3; b = 4; c = 5;
	
	// verificar se é par ou ímpar
	parImpar(a);
	parImpar(b);
	parImpar(c);	
}
