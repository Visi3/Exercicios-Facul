#include <stdio.h>
#include <stdlib.h>
#include <iostream>

//Aluno: Leonardo Gollub

int main(){

int i = 0;
float vetor[5];
float media,maior;
float menor = 100;

do {
   printf("Insira a %i media:",i+1);
   scanf("%f",&vetor[i]);

   media = media + vetor[i];

   if(maior < vetor[i]){
        maior = vetor[i];
   } 
    if(menor > vetor[i]){
        menor = vetor[i];
    }
   

    i++;

} while (i<5);

media = media / 5;

printf("A media e: %.2f \nA maior media e: %.2f\nA menor media: %.2f", media, maior, menor);

}