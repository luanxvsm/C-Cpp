#include <stdio.h>
#include <string.h>

#define MAX 10

struct contato {
    char nome[50];
    char telefone[15];
};

int main() {
    struct contato agenda[MAX];
    int i;


    for (i = 0; i < MAX; i++) {
        printf("Digite o nome do contato %d: ", i+1);
        fgets(agenda[i].nome, 50, stdin);
        agenda[i].nome[strcspn(agenda[i].nome, "\n")] = '\0';
        printf("Digite o telefone do contato %d: ", i+1);
        fgets(agenda[i].telefone, 15, stdin);
        agenda[i].telefone[strcspn(agenda[i].telefone, "\n")] = '\0';
    }


    printf("\nAgenda Telefônica:\n");
    for (i = 0; i < MAX; i++) {
        printf("%d. Nome: %s\n   Telefone: %s\n", i+1, agenda[i].nome, agenda[i].telefone);
    }

    return 0;
}
