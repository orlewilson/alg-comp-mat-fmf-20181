/*
Disciplina:	Algoritmos Computacionais 
            (Matutino)
Prof.:		Orlewilson B. Maia
Autor(a):	Seu nome
Data:		07/05/2018
Descrição:	Ler dois valores reais e 
			e dividir o primeiro valor pelo
			segundo valor, sabendo que
			o segundo valor deve ser 
			diferente de zero
*/// Bibliotecas
#include <stdio.h>

// programa principal
int main()
{
	// declaração das variáveis
	float X,  // valor 1
			Y,  // valor 2
			Z; // resultado da divisão
	//float Y;
	//float Z;
	
	// ler valor 1
	printf("Informe valor para X: ");
	scanf("%f", &X);

	// ler valor 2
	printf("Informe valor para Y: ");
	scanf("%f", &Y);

	// verificar se Y é difrente de zero
	// == significa 'é igual'
	/*if (Y == 0)	{
		printf("Não existe divisão por zero");	
	}
	else {
		Z = X/Y;
		printf("%f / %f = %.3f", X, Y, Z);
	}*/
	// != significa 'é diferente'
	if (Y != 0)	{
		Z = X/Y;
		printf("%f / %f = %.3f", X, Y, Z);
	}
	else {
		printf("Não existe divisão por zero");
	}
}








