#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NOME 50
#define MAX_TEL 15
#define MAX_CONTATOS 10

typedef struct {
    char nome[MAX_NOME];
    char telefone[MAX_TEL];
} Contato;

int main() {
    Contato agenda[MAX_CONTATOS];

    // Preenche a agenda com alguns contatos
    strcpy(agenda[0].nome, "João");
    strcpy(agenda[0].telefone, "1111-1111");

    strcpy(agenda[1].nome, "Maria");
    strcpy(agenda[1].telefone, "2222-2222");

    strcpy(agenda[2].nome, "Pedro");
    strcpy(agenda[2].telefone, "3333-3333");
    
    strcpy(agenda[2].nome, "Pedro");
    strcpy(agenda[2].telefone, "3333-3333");
    
    strcpy(agenda[2].nome, "Pedro");
    strcpy(agenda[2].telefone, "3333-3333");
    
    strcpy(agenda[2].nome, "Pedro");
    strcpy(agenda[2].telefone, "3333-3333");
    
    strcpy(agenda[2].nome, "Pedro");
    strcpy(agenda[2].telefone, "3333-3333");
    
    strcpy(agenda[2].nome, "Pedro");
    strcpy(agenda[2].telefone, "3333-3333");
    
    strcpy(agenda[2].nome, "Pedro");
    strcpy(agenda[2].telefone, "3333-3333");
    
    strcpy(agenda[2].nome, "Pedro");
    strcpy(agenda[2].telefone, "3333-3333");

    // Exibe os contatos da agenda
    printf("Agenda Telefonica:\n");
    for (int i = 0; i < MAX_CONTATOS; i++) {
        printf("%s: %s\n", agenda[i].nome, agenda[i].telefone);
    }

    return 0;
}