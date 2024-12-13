#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

typedef struct Namorado{

    char nome[TAM];
    int idade;
    float altura;
    char personalidade[TAM];

}candidato;

typedef candidato * candidatoptr;

candidatoptr *cria_lista(int n);
void inserir_candidato(candidatoptr*lista, int n);
void imprime_candidato(candidatoptr Namorado);
void imprime_lista(candidatoptr * lista, int n);

int main(){

    candidatoptr * lista_de_candidatos = cria_lista(2);

    inserir_candidato(lista_de_candidatos, 2);    
    imprime_candidato(lista_de_candidatos[0]);
    imprime_lista(lista_de_candidatos, 2);

    for (int i = 0; i < 2; i++) {
        free(lista_de_candidatos[i]);
    }
    free(lista_de_candidatos);

    return 0;
}

candidatoptr *cria_lista(int n){

    candidatoptr * lista = (candidatoptr*)malloc(n*sizeof(candidatoptr));

    for(int i = 0; i<n; i++){

        lista[i] = NULL;
    }

    return lista;
}

void inserir_candidato(candidatoptr*lista, int n){

    int i = 0;

    for(i = 0; i<n; i++){

        if(lista[i]==NULL){
            lista[i] = (candidatoptr)malloc(sizeof(candidato));

            if(lista[i]==NULL){

            printf("\nSem memoria suficiente!!!\n\n");
            exit(1);
            }

            printf("Insira os dados do candidato %d:\n\n", i+1);
            printf("Nome: ");
            scanf(" %99s", lista[i]->nome);
            printf("Idade: ");
            scanf("%d%*c", &lista[i]->idade);
            printf("Altura: ");
            scanf("%f%*c", &lista[i]->altura);
            printf("Personalidade: ");
            scanf(" %99s", lista[i]->personalidade);

            printf("\nCandidato inserido!!!\n\n");
        }

    }
    
}

void imprime_candidato(candidatoptr Namorado){

    printf("Candidato:\n");
    printf("Nome: %s\n", Namorado->nome);
    printf("Idade: %d\n", Namorado->idade);
    printf("Altura: %.2f\n", Namorado->altura);
    printf("Personalidade: %s\n", Namorado->personalidade);
}

void imprime_lista(candidatoptr * lista, int n){

    for(int i = 0; i<n; i++){

        if(lista[i]!=NULL){

        printf("\nCandidato %d:\n\n", i+1);
        printf("Nome: %s\n", lista[i]->nome);
        printf("Idade: %d\n", lista[i]->idade);
        printf("Altura: %.2f\n", lista[i]->altura);
        printf("Personalidade: %s\n", lista[i]->personalidade);
        }

        else{

            printf("\nPosicao %d vazia!!!\n", i+1);
        }
        
    }
}
