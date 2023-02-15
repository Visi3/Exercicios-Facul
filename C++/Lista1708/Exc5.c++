#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// Aluna: Isabelly Vitoria Castro Pitombeira

int main () {
    float valor, resultado;
    int escolha; 


    printf("Digite o valor da compra:");
    scanf("%f",&valor);
    printf("Escolha: \n1 - Pagamento a vista v \n2 - 30 dias direto \n3 - 60 dias direto");
    scanf("%i",&escolha);

    switch (escolha) {
        case 1:
            if (valor > 0){            
                resultado = valor - ((valor/100)*10);
                printf("O valor total da compra a vista fica %.2f",resultado);
            } else{
                printf("Valor invalido");
            }
            break;
        case 2:
            if (valor > 0){            
                resultado = valor - ((valor/100)*5);
                printf("O valor total da compra para 30 dias fica %.2f",resultado);
            } else{
                printf("Valor invalido");
            }
            break;
        case 3:
            if (valor > 0){            
                printf("O valor total da compra a vista fica %.2f",valor);
            } else{
                printf("Valor invalido");
            }
            break;
        default:
            printf("Numero invalido");
    }
}