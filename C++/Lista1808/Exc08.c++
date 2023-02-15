#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// Aluno: Isabelly Vitoria Castro Pitombeira

int main () {

    int i,j,p = 0;
    int matriz[3][3];
    float media, vetor[p];

    for (i = 0; i < 3;i++){
        media = 0;
        for(j = 0;j < 3;j++){
            printf("\nInsira o %i valor:", (j+1));
            scanf("%i",&matriz[i][j]);

                if ((i % 2) == 0){
                    media = media + matriz[i][j];
                }
        }
        media = media / 3;
        vetor[i] = media;
    }
    for(i = 0;i < 3;i++){
        if ((i % 2) == 0){
            printf("\nA media da linha %i e %.2f\n",i,vetor[i]);
        } 
    }

}