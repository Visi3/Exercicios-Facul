#include <stdio.h>
#include <string.h>

struct funcionario //Criando a Struct
{
    char nome[50]; // Criando os dados
    int idade;
    float salario;
};

int main(){
    struct funcionario f; 
    strcpy(f.nome,"Isinha Gameplay 2004 Pro"); // Atribuindo valores aos campos
    f.idade = 18;
    f.salario = 1000;
    printf("Nome:  %s\n", f.nome); // Apresentando os valores 
    printf("Idade:  %i\n", f.idade);
    printf("Salario:  %.2f\n", f.salario);
    return 0;   
}
