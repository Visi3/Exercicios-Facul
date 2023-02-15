#include <stdio.h>
#include <conio.h>

int main()
{
int i,j;// indice
int a[4][4];// matriz

for(i=0;i<=3;i++)// monta linha
{
	for(j=0;j<=3;j++)// monta coluna
	{
	
	  if(i==j)
	   {
	   	a[i][j]=1;
	   }
	     else
	     {
	     a[i][j]=0;	
	     }
    }
}
for(i=0;i<=3;i++)// monta linha
{
	for(j=0;j<=3;j++)// monta coluna
	{
		printf("%d",a[i][j]);
    }
    printf("\n");
}

	getch();
}
