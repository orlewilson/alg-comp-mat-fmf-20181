/*
Disciplina:	Algoritmos Computacionais Matutino
Prof.:		Orlewilson B. Maia
Autor:		Seu nome
Data:		23/04/2018
Descri��o:	Mostrar os tipos de vari�veis
*/

// Bibliotecas
#include <stdio.h>
#include <stdbool.h> // valor booleano

// programa principal
int main()
{
	// declara��o das vari�veis
	int a;	// valores entre -32.767 a 32.767
	unsigned int b;  // valores entre 0 a 65.535
	long int c;	// -2.147.483.647 a 2.147.483.647

	float d; // 10e-38 e 10e38 (7 d�gitos precis�o)
	double e;// 10e-4932 e 10e4932 (15 d�gitos precis�o)

	bool f; // valor  0 (falso) ou 1 (verdadeiro)
	
	char g;	// caracter e usa-se aspas simples ('')
	
	// iniciando as vari�veis
	a = -256;
	b = 45;
	c = 34672345;
	
	d = 3.1415926;
	e = 3.141592653589793;
	
	f = 0;
	
	g = 'C';
	
	// mostrar os valores de cada vari�vel
	printf("valor de a: %d \n", a);
	printf("valor de b: %d \n", b);
	printf("valor de c: %d \n", c);
	
	printf("valor de d: %.7f \n", d);
	printf("valor de e: %.15f \n", e);
	
	printf("valor de f: %d \n", f);
	
	printf("valor de g: %c \n", g);
	
}

