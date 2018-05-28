/*
Disciplina:	Algoritmos Computacionais 
            (matutino)
Prof.:		Orlewilson B. Maia
Autor(a):	Seu nome
Data:		28/05/2018
Descrição:	Armazenar valores em vetores
*/
// Bibliotecas
#include <stdio.h> 

// Programa Principal
int main()
{
	// declaração das variáveis
	// vetor unidimensional
	int vetorA[5];
	
	//vetor bidimensional
	int vetorB[2][2];
	
	// povoar valores nos vetores
	vetorA[0] = 5;
	vetorA[1] = 2;
	vetorA[2] = 1000000;
	vetorA[3] = 3;
	vetorA[4] = 1;
	
	vetorB[0][0] = 32;
	vetorB[0][1] = 2;
	vetorB[1][0] = 65;
	vetorB[1][1] = 89;
	
	// mostrar valores
	printf("vetorA[0] = %d \n", vetorA[0]);
	printf("vetorA[1] = %d \n", vetorA[1]);
	printf("vetorA[2] = %d \n", vetorA[2]);
	printf("vetorA[3] = %d \n", vetorA[3]);
	printf("vetorA[4] = %d \n", vetorA[4]);
	
	printf("vetorB[0][0] = %d \n", vetorB[0][0]);	
	printf("vetorB[0][1] = %d \n", vetorB[0][1]);
	printf("vetorB[1][0] = %d \n", vetorB[1][0]);
	printf("vetorB[1][1] = %d \n", vetorB[1][1]);
	
	
}













