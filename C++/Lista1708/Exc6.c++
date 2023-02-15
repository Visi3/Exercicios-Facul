#include <stdio.h>
#include <stdlib.h>
#include <iostream>

// Aluna: Isabelly Vitoria Castro Pitombeira

int main() {
    float valor1,valor2,resultado;
    char operador;
    int parada = 0;


    while (parada != -1) {
        printf("Insira o primeiro valor da operacao:");
            scanf("%f", &valor1);
        printf("Insira o segundo valor da operacao:");
            scanf("%f", &valor2);
        printf("Insira o operador:");
            scanf("%s",&operador);

        switch (operador) {
            case '+':
                resultado = valor1 + valor2;
                printf("O resultado e %.2f", resultado);
                break;
            case '-':
                resultado = valor1 - valor2;
                printf("O resultado e %.2f", resultado);
                break;
            case '/':
                if ((valor1 == 0) || (valor2 == 0)){
                    printf("Valor invalido!");
                } else {
                    resultado = valor1 / valor2;
                    printf("O resultado e %.2f", resultado);
                }
                break;
            case '*':
                resultado = valor1 * valor2;
                printf("O resultado e %.2f", resultado);
                break;
            default :
            printf("Operador inválido!");
        }
        printf("\nDeseja fazer mais uma operacao? 0 -sim/ -1 -nao");
            scanf("\n%i", &parada);
    }
}

