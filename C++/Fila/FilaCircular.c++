#include <stdio.h>
#define MAX 5 


int ini = 0, fim = 0;



int vazia(int fila[MAX])//Verifica se está vazia
{
	return (ini == fim);
}

int cheia(int fila[MAX])//Verifica se está cheia 
{
	
	return ((fim + 1) % MAX == ini);
}


int inserir(int fila[MAX], int e)//Função para inserir
{
	
	if(cheia(fila)) // Verifica se está cheio primeiro
	{
		printf("Fila cheia!!\n\n\n");
		return 0;
	}
		
	fila[fim++] = e; // Adiciona o valor 
	
	if(fim == MAX)
		fim = 0;
		
	return 1;
}


int remover(int fila[MAX])//Função para remover o valor
{

	if(vazia(fila)) // Verifica se está vazia
	{
		printf("Fila vazia!!\n\n\n");
		return 0;
	}
		
	int e = fila[ini++]; // Remove
	
	if(ini == MAX) //Renova para zero o inicio 
		ini = 0;
		
	return e;
}


int topo(int fila[MAX]) //Retorna o primeiro da fila (o topo)
{
	return fila[ini];
}

int main()
{
	int fila[MAX];
	
	inserir(fila, 9); //Chamando função inserir
	inserir(fila, 34);
	inserir(fila, 6);
	inserir(fila, 45);
	printf("Primeiro: %d\n\n\n", topo(fila)); //9,34,6,45
	
	inserir(fila, 96); 
    
	// Imprime fila cheia


	remover(fila); //Chamando função remover
	
	printf("Primeiro: %d\n\n\n", topo(fila)); //34,6,45,96
	
	remover(fila);
	
	printf("Primeiro: %d\n\n\n", topo(fila)); //6,45,96
	
	inserir(fila, 8);
	
	printf("Primeiro: %d\n\n\n", topo(fila)); //6,45,96,8
	
	remover(fila);
	
	printf("Primeiro: %d\n\n\n", topo(fila)); //45,96,8
	
	remover(fila);
	
	printf("Primeiro: %d\n\n\n", topo(fila)); //96,8
	
	remover(fila); //8
	
	remover(fila); //vazia
	
	inserir(fila, 21);
	
	printf("Primeiro: %d\n\n\n", topo(fila)); //21
	
	return 0;
}