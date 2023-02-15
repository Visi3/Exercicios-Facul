#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// Aluna: Isabelly Vitoria Castro Pitombeira

int main (){
    int parada;
    float maior, valor;
    maior,parada = 0;

    while (parada != -1) {
        printf("Insira um valor:");
            scanf("%f", &valor);

        if (valor > maior) {
            maior = valor;
        }
        printf("\nAdicionar mais um valor? 0 -sim /-1 -nao");
            scanf("%i",&parada);
    }
    printf("\nO maior valor é %.2f",maior);


}