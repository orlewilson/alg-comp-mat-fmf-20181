/*
Disciplina:	Algoritmos Computacionais 
            (Matutino)
Prof.:		Orlewilson B. Maia
Autor(a):	Seu nome
Data:		07/05/2018
Descri��o:	Ler dois valores reais e 
			e dividir o primeiro valor pelo
			segundo valor, sabendo que
			o segundo valor deve ser 
			diferente de zero
*/// Bibliotecas
#include <stdio.h>

// programa principal
int main()
{
	// declara��o das vari�veis
	float X,  // valor 1
			Y,  // valor 2
			Z; // resultado da divis�o
	//float Y;
	//float Z;
	
	// ler valor 1
	printf("Informe valor para X: ");
	scanf("%f", &X);

	// ler valor 2
	printf("Informe valor para Y: ");
	scanf("%f", &Y);

	// verificar se Y � difrente de zero
	// == significa '� igual'
	/*if (Y == 0)	{
		printf("N�o existe divis�o por zero");	
	}
	else {
		Z = X/Y;
		printf("%f / %f = %.3f", X, Y, Z);
	}*/
	// != significa '� diferente'
	if (Y != 0)	{
		Z = X/Y;
		printf("%f / %f = %.3f", X, Y, Z);
	}
	else {
		printf("N�o existe divis�o por zero");
	}
}








