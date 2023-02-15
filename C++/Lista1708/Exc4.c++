#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// Aluna: Isabelly Vitoria Castro Pitombeira

int main () {
    float valor, resultado;
    int escolha; 


    printf("Digite o valor da compra:");
    scanf("%f",&valor);
    printf("Escolha: \n1 - Pagamento à vista v \n2 - 30 dias direto \n3 - 60 dias direto");
    scanf("%i",&escolha);

    if ((valor > 0) && (escolha == 1)) {
        resultado = valor - ((valor/100)*10);
        printf("O valor total da compra a vista fica %.2f",resultado);
    } else{
        if ((valor > 0) && (escolha == 2)) {
            resultado = valor - ((valor/100)* 5);
            printf("O valor total da compra para 30 dias fica %.2f",resultado);
        } else {
            if ((valor > 0) && (escolha == 3)) {
                printf("O valor total para 60 dias fica %.2f", valor);
            } else { 
                printf("Numero invalido!");
            }
        }
    }
}