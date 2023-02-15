#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

int main () {
int vetA[6];
int vetB[6];
int vetC[6];
int i;

for(i = 0; i < 6; i++){
	printf("Digite o %i valor de A \n", (i + 1));
	scanf("%i", &vetA[i]);
	printf("Digite o %i valor de B \n", (i + 1));
	scanf("%i", &vetB[i]);
	
	if((i % 2) == 0){
		vetC[i] = vetA[i];
	}else{
		vetC[i] = vetB[i];
	}
}
printf("%i", vetC);
	getch();
}