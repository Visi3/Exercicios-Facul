#include <stdio.h>
#include <stdlib.h>
#include <iostream>


int main () {

int cod[5];
char desc[5];
float pre[5];
int i;

for (i = 0; i < 5; i++){
	printf("insira o código do %i produto\n", (i+1));
	scanf("%i",&cod[i]);
	printf("insira o valor do %i produto\n", (i+1));
	scanf("%f",&pre[i]);
	printf("insira a descrição do %i produto\n", (i+1));
	scanf("%s",&desc[i]);
}

for (i = 0; i < 5; i++){
	if(pre[i] < 10){
		printf("%i\n", cod[i]);
		printf("%s\n", &desc[i]);
	}
}
}