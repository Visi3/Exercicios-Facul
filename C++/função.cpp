# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
# include <math.h>
// fun��o retorna valor.
// float entra no lugar do void
//  
float comissao(float valor,float perc)
{
// corpo da fun��o 
// instru��es 
float extra;
extra=valor*perc;
return (extra);	
}



int main()
{ // inicio
	float valor, perc,total;
	printf("Digite o valor do trabalho\n"); 
	scanf("%f",&valor);
	printf("Digite o percentual da comissao\n"); 
	scanf("%f",&perc);
	total=comissao(valor,perc);

	
	printf("Valor Total:%2.f\n",total);
		getch();
}// fim 
