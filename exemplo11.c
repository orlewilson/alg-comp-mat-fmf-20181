/*
Disciplina:	Algoritmos Computacionais 
            (matutino)
Prof.:		Orlewilson B. Maia
Autor(a):	Seu nome
Data:		28/05/2018
Descrição:	Ler notas (Ap1, Ap2 e Ap3), calcular 
			a média e armazenar em um vetor
*/
// Bibliotecas
#include <stdio.h> 

// Programa Principal
int main()
{
	// variáveis
	float notas[4];
	
	// Lendo as notas
	printf("Informe nota AP1: ");
	scanf("%f", &notas[0]);
	
	printf("Informe nota AP2: ");
	scanf("%f", &notas[1]);
	
	printf("Informe nota AP3: ");
	scanf("%f", &notas[2]);
	
	// calcular a média
	notas[3] = 0.3*notas[0] + 0.3*notas[1] + 
			   0.4*notas[2];
	
	// verificar se está aprovado
	if (notas[3] >= 5.0)
	{
		printf("Aprovado :) Media = %f", notas[3]);	
	} 
	else 
	{
		printf("Reprovado :( Media = %f", notas[3]);	
	}
}








