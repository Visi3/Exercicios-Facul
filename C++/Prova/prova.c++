#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// Faça um programa que monte uma matriz 3x3 e mostre
// A soma dos valores da diagonal principal
// A soma dos valores da segunda linha 
// A soma dos valores da primeira coluna
    int diagonal = 0, linha = 0, coluna = 0, l = 2;
    int vetor[3];
    int matriz[3][3];
    int i,j;

    void apresentar(){

      for(int i =0;i < 3; i++){
      printf(" %i \n", vetor[i]);
    }

    }

    int main () {
    
    for ( i = 0; i < 3 ;i++) { // linha
        for ( j = 0; j < 3;j++ ) { // coluna
            printf("Insira o valor da linha %i e coluna %i \n" , (i+1), (j+1));
            scanf("\n %i", &matriz[i][j]);

            if (j == i){
                diagonal = (diagonal + matriz[i][j]);
            }
            if (i == 1) {
                linha = (linha + matriz[i][j]);
            }
            if (j == 0) {
                coluna = (coluna + matriz[i][j]);
            }

        }
    }
    vetor[l-2] = diagonal;
    vetor[l-1] = linha;
    vetor[l] = coluna;


    apresentar();
}