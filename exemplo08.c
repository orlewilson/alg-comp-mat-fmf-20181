/*
Disciplina:	Algoritmos Computacionais 
            (matutino)
Prof.:		Orlewilson B. Maia
Autor(a):	Seu nome
Data:		21/05/2018
Descri��o:	Ler 3 valores e mostrar soma 
			dos valores
*/
// Bibliotecas
#include <stdio.h> 

// Programa Principal
int main()
{
	// vari�veis
	int a, b, c, soma;
	
	int qtdValores; // quantidade de valores
				    // que ser�o lidos 
				    
	int aux; 		// auxiliar para 
					// contar n�meros
	
	// vers�o 1.0
	/*printf("Informar valor: ");
	scanf("%d", &a);

	printf("Informar valor: ");
	scanf("%d", &b);
	
	printf("Informar valor: ");
	scanf("%d", &c);
	
	// soma dos valores
	soma = a + b + c;
	*/
	
	// vers�o 2.0
	/*soma = 0;
	qtdValores = 3;
	aux = 1;
	
	// enquanto = while
	while (aux <= qtdValores) { 
		// ler valor
		printf("Informe um valor: ");
		scanf("%d", &a);
		// soma
		soma = soma + a;  
		// soma += a;
		// incrementa aux
		aux = aux + 1; 
		// aux += 1;
		// aux++; 
	}
	*/
	
	// vers�o 3.0
	soma = 0;
	qtdValores = 3;
	
	// para = for
	for (aux = 1 ; // iniciar vari�vel
		 aux <= qtdValores ; // condi��o
		 aux = aux + 1) // incrementador
	{
		printf("Informe um valor:");
		scanf("%d", &a);
		soma = soma + a;
	}
	
	// mostrar resultado 
	printf("Soma dos valores: %d", soma);	
}
