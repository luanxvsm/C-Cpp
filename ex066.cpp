#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct contato {
    char nome[50];
    char telefone[15];
};

int main() {
    struct contato * agenda;
    int i;

    
    agenda = (struct contato *) malloc(10 * sizeof(struct contato));

    
    for (i = 0; i < 10; i++) {
        printf("Digite o nome do contato %d: ", i+1);
        fgets(agenda[i].nome, 50, stdin);
        agenda[i].nome[strcspn(agenda[i].nome, "\n")] = '\0'; 
        printf("Digite o telefone do contato %d: ", i+1);
        fgets(agenda[i].telefone, 15, stdin);
        agenda[i].telefone[strcspn(agenda[i].telefone, "\n")] = '\0'; 
    }


    printf("\nAgenda Telefônica:\n");
    for (i = 0; i < 10; i++) {
        printf("%d. Nome: %s\n   Telefone: %s\n", i+1, agenda[i].nome, agenda[i].telefone);
    }

    
    free(agenda);

    return 0;
}
