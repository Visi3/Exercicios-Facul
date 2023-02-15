#include <conio.h>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#define TAM 2

void imprime_vetor(int vetor[TAM],int topo){

    //Auxiliar contador
    int cont;

    printf("\n") ;

     //Imprime o vetor
    for(cont = 0; cont < TAM; cont++){
        printf("%d",vetor[cont]," - ") ;
    }
    printf("  - %d topo ",topo);
}

//Adiciona um valor na pilha
void pilha_push(int pilha[TAM],int valor, int *topo){

    //Caso n�o possa colocar mais valores 
    if(*topo == TAM - 1){
        printf("\nPilha Cheia!");
    }else{
        *topo = *topo + 1;
        pilha[*topo] = valor;
        printf("\n\n Valor adicionado: %i", valor);
    }

}
// remove um valor da pilha
void pilha_pop (int pilha[TAM], int *topo){
    
    int valor;
    // Caso não possa tirar mais valores
    if (*topo != -1) {
        valor = pilha[*topo];
        pilha[*topo] = 0;
        *topo = *topo - 1;
        printf("\n\n Valor removido : %i", valor);
    }else {
        printf("\nPilha vazia!");
    }
}

int main(){

    int pilha[TAM]={0,0};   // tamanho da pilha que pode ter 5 valores
    int topo = -1;                          //topo da pilha n�o tem nada 


    imprime_vetor(pilha,topo);       
	pilha_push(pilha, 3, &topo);
    imprime_vetor(pilha, topo); 
   	pilha_push(pilha, 4, &topo);
    imprime_vetor(pilha,topo);

   	pilha_pop(pilha ,&topo);
    imprime_vetor(pilha,topo);
    pilha_pop(pilha ,&topo);
    imprime_vetor(pilha,topo);

   
}
