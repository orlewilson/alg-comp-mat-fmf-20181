/*
Disciplina:	Algoritmos Computacionais 
            (matutino)
Prof.:		Orlewilson B. Maia
Autor(a):	Seu nome
Data:		28/05/2018
Descri��o:	Verificar se um n�mero � par ou �mpar
*/
// Bibliotecas
#include <stdio.h> 

// declarar fun��o
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
	// vari�veis
	int a, b, c;
	
	a = 3; b = 4; c = 5;
	
	// verificar se � par ou �mpar
	parImpar(a);
	parImpar(b);
	parImpar(c);	
}
