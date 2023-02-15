#include <stdio.h>
#include <stdlib.h>
#include <iostream>

//Aluno: Isabelly Vitoria Castro Pitombeira

int main() {

    float matrizNotas [3][3];
    float mediaVetor[3];

    int i,j;

    for (i = 0; i < 3 ;i++){ // linha
        float media = 0;
        for (j = 0; j < 3 ;j++){  //coluna
            printf("\n Insira o %i valor: ",(i+1));   
            scanf("%f", &matrizNotas[i][j]); 
            media =  media + matrizNotas[i][j];

        }
        media = media / 3;
        mediaVetor[i] = media;
    }

    for (i = 0;i < 3;i++){
       printf(" \n %.2f  ", mediaVetor[i]);
    }
}