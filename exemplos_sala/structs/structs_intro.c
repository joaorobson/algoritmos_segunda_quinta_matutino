#include <stdio.h>
#include <string.h>

typedef struct endereco {
    char rua[50];
    int numero;
    char cidade[50];
} end;


// definição da struct aluno (o que ela armazena (tipos das variáveis))
struct aluno {
    char nome[50];
    int matricula;
    float nota1, nota2, nota3;
    end endereco;
} a2, a3; // posso declarar alguns alunos logo após definir struct

typedef int inteiro; // posso dar apelidos para os tipos nativos também

inteiro main(){
    // declarar struct a1 e já inicializar variáveis com os valores passados
    //struct aluno a1 = {"joao", 11111, 10, 9, 8};
    /* printf("nome do aluno a1: %s\n", a1.nome);
    printf("matricula do aluno a1: %d\n", a1.matricula);
    printf("notas do aluno a1: %f %f %f\n", a1.nota1, a1.nota2, a1.nota3); */

    /* struct aluno alunosMatutino[3]; // lista de structs aluno

    strcpy(alunosMatutino[0].nome, "arthur");
    alunosMatutino[0].matricula = 10;
    alunosMatutino[0].nota1 = 1;
    alunosMatutino[0].nota2 = 2;
    alunosMatutino[0].nota3 = 3; */

    // inicializar usando scanf
    printf("Preencha o cadastro do aluno:\n");
    printf("nome: ");
    scanf("%s", a2.nome);
    printf("matricula: ");
    scanf("%d", &a2.matricula);
    printf("notas: ");
    scanf("%f %f %f", &a2.nota1, &a2.nota2, &a2.nota3);
    printf("endereco:\n");
    fflush(stdin);
    printf("rua: ");
    fgets(a2.endereco.rua, 50, stdin);
    printf("numero: ");
    scanf("%d", &a2.endereco.numero);  
    printf("cidade:\n");
    fflush(stdin);
    fgets(a2.endereco.cidade, 50, stdin);

    printf("nome do aluno a2: %s\n", a2.nome);
    printf("matricula do aluno a2: %d\n", a2.matricula);
    printf("notas do aluno a2: %f %f %f\n", a2.nota1, a2.nota2, a2.nota3);
    printf("endereco do aluno a2: %s, %s, numero %d\n", 
            a2.endereco.cidade,
            a2.endereco.rua,
            a2.endereco.numero);

    /* a3 = a2; // para structs DO MESMO TIPO, é possível fazer atribuição assim

    printf("nome do aluno a3: %s\n", a3.nome);
    printf("matricula do aluno a3: %d\n", a3.matricula);
    printf("notas do aluno a3: %f %f %f\n", a3.nota1, a3.nota2, a3.nota3);
 */
    return 0;
}