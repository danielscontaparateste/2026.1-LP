#include <stdio.h>

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


int main(){
    struct disciplina d1;

    printf("Digite o nome da disciplina: ");
    fgets(d1.nome, 50, stdin);

    printf("Digite o codigo da disciplina: ");
    scanf("%d", &d1.codigo);

    printf("Digite a carga horaria da disciplina: ");
    scanf("%d", &d1.carga_horaria);

    getchar(); // Limpa o buffer
    
    printf("Digite o nome do professor: ");
    fgets(d1.prof.nome, 50, stdin);

    printf("Digite a titulacao do professor: ");
    fgets(d1.prof.titulacao, 50, stdin);

    printf("Digite a matricula do professor: ");
    scanf("%d", &d1.prof.matricula);

    printf("\nDisciplina: %s", d1.nome);
    printf("Codigo: %d\n", d1.codigo);
    printf("Carga Horaria: %d\n", d1.carga_horaria);
    printf("Professor: %s", d1.prof.nome);
    printf("Titulacao do Professor: %s", d1.prof.titulacao);
    printf("Matricula do Professor: %d\n", d1.prof.matricula);

    return 0;


}