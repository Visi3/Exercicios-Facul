#include <stdio.h>

// Aluno: Leonardo Gollub

int main() 
{
  int numero,        
    i, 
    nfatorial;    
  
  printf("\n\tCalculo do fatorial de um numero\n");
  printf("\nDigite um numero: ");
  scanf("%d", &numero);
  
  
  nfatorial = 1;
  
  for (i = 2; i <= numero; i++) 
    {  
      nfatorial = nfatorial * i;
    }
  
  printf("O valor de %d!= %d\n", numero, nfatorial);
  return 0;
}
