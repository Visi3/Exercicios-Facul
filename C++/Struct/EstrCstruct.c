#include <stdio.h>
#include <stdlib.h>
// Aluna: Isabelly Vitoria Castro

typedef struct // Criando a struct pessoa 
{
    char nome[50];
}Pessoa;

typedef struct no // Criando o nó 
{
    Pessoa p;
    struct no *proximo;
}No;

void imprimirPessoa(Pessoa p) { // Função para imprimir o nome da pessoa
    printf("\nNome: %s",p.nome);
}

Pessoa lerPessoa(){ // Ler o nome que irá na struct
    Pessoa p;
    printf("\nNome:");
    fgets(p.nome, 49, stdin);
    return p;
}

void inserirFila (No **fila, Pessoa pessoa){ // Função para inserir na fila usando ponteiro
    No *aux, *novo = malloc(sizeof(No));
    if(novo){
        novo ->p = pessoa;
        novo ->proximo = NULL;
        if (*fila == NULL){
           *fila = novo;
        } else {
            aux = *fila;
            while (aux ->proximo){
                aux = aux->proximo;
                aux ->proximo = novo;
            }           
        }       
    }else{
        printf("\n Erro ao alocar memoria!!!!!!\n");
    }

}

No* removerFila(No **fila){ // Função para remover da fila usando ponteiro
    No *remover = NULL;

    if(*fila){
        remover = *fila;
        *fila = remover->proximo;
    }else{
        printf("\n Fila Vazia!!");

    }
    return remover;

}
void imprimir(No *fila){ //  Função para imprimir a fila 
    printf("\n\nFila:\n\n");
    while(fila){
        imprimirPessoa(fila->p);
        fila = fila->proximo;
    }
    printf("\n\nFim Fila\n\n");
}

int main() { // Iniciando tudo 
    No *r, *fila = NULL;
    int opcao;
    Pessoa p;

    do { 
        printf(" 0-Sair\n1-Inserir\n2-Remover\n3-Imprimir\n\n"); 
        scanf("%d", &opcao);
        getchar();

        switch (opcao){ // Aplicando opções para o usuário 
        case 1:
            p = lerPessoa();
            inserirFila(&fila, p);
            break;
        case 2:
            r = removerFila(&fila);
            if (r){
                imprimirPessoa(r->p);
                free(r);
            }
            break;
        case 3:
            imprimir(fila);
            break;
        
        default:
            if (opcao != 0)
            {
                printf("\n\nOpcao Invalida!!!!\n\n");
            }    
            break;
        }

    } while (opcao != 0);

    return 0;
}





