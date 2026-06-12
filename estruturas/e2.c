#include <stdio.h>
#include <stdlib.h>

struct professor{
        char nome[50];
        char titulacao[50];
        int matricula;
};

struct disciplina{
    char nome[50];
    int codigo;
    int carga_horaria;
    struct professor prof;
};       

#define QTD_DISCIPLINAS 2

void popularDisciplinas(struct disciplina *, int);
void exibirDisciplinas(struct disciplina *, int);

int main(){
    struct disciplina *pdisc;

    pdisc = (struct disciplina*) malloc(QTD_DISCIPLINAS * sizeof(struct disciplina));
    if (pdisc == NULL) {
        printf("Erro ao alocar memoria.\n");
        // return 1;
        exit(1);
    }

    // Prencher os dados das disciplinas    
    popularDisciplinas(pdisc, QTD_DISCIPLINAS);

    exibirDisciplinas(pdisc, QTD_DISCIPLINAS);
    
    free(pdisc);
    return 0;
}


void popularDisciplinas(struct disciplina *p, int qtdDisciplinas) {

    for (int k=0; k<qtdDisciplinas; k++){

        printf("Digite o nome da disciplina: ");
        fgets((p+k)->nome, 50, stdin);

        printf("Digite o codigo da disciplina: ");
        scanf("%d", &(p+k)->codigo);

        printf("Digite a carga horaria da disciplina: ");
        scanf("%d", &(p+k)->carga_horaria);

        getchar(); // Limpa o buffer
        
        printf("Digite o nome do professor: ");
        fgets(p[k].prof.nome, 50, stdin);

        printf("Digite a titulacao do professor: ");
        fgets((p+k)->prof.titulacao, 50, stdin);

        printf("Digite a matricula do professor: ");
        scanf("%d", &(p+k)->prof.matricula);

        getchar(); // Limpa o buffer

    }
    
}

void exibirDisciplinas(struct disciplina *p, int qtdDisciplinas) {

    for (int k=0; k<qtdDisciplinas; k++){
        printf("\nDisciplina: %s", (p+k)->nome);
        printf("Codigo: %d\n", (p+k)->codigo);
        printf("Carga Horaria: %d\n", (p+k)->carga_horaria);
        printf("Professor: %s", (p+k)->prof.nome);
        printf("Titulacao do Professor: %s", (p+k)->prof.titulacao);
        printf("Matricula do Professor: %d\n", (p+k)->prof.matricula);
    }
    
}