#include <stdio.h>
#include <stdlib.h>
#include <iostream>

//Aluno: Isabelly Vitoria Castro Pitombeira

int main (){

    int matrizValor [3][3];
    int quantidadeLinha[3],i,j,p = 0,cont = 0;
    float media = 0;

    for (i = 0; i < 3 ;i++){ // linha
        cont = 0;
        for (j = 0; j < 3 ;j++){  //coluna
            printf("\n Insira o %i valor: ",(j+1));   
            scanf("%i", &matrizValor[i][j]); 
            
                if ((matrizValor[i][j] % 2) == 0){
                    media = media + matrizValor[i][j];
                    p++;
                }
                if ((matrizValor[i][j] >= 12) && (matrizValor[i][j]<=20)) {
                    cont++;
                }
        }

        quantidadeLinha[i] = cont;
    }

    media = media / p;

    for (i = 0;i < 3;i++){
       printf("\nA quantidade na linha %i e %i ", (i+1) ,quantidadeLinha[i]);
    }
    printf("\nA media dos elementos pares e %.2f ", media);
}