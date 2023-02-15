#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// Aluno: Isabelly Vitoria Castro Pitombeira

int main () {

    float matriz[3][3],somaD = 0,somaT = 0;
    int i,j;

    for (i = 0; i < 3;i++){
        for(j = 0;j < 3;j++){
            printf("\nInsira o %i valor:", (j+1));
            scanf("%f",&matriz[i][j]);

            if(i == j) {
                somaD = somaD + matriz[i][j];
            }
            if(i == 2){
                somaT = somaT + matriz[i][j];
            }
        }
    }
    printf("\nSoma da diagonal %.2f\n",somaD);
    printf("\nSoma da terceira linha %.2f\n",somaT);
}