#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media;
    char turno;

    scanf("%c", &turno);

    printf("Digite o turno do aluno:\n");
    printf("Digite as notas dos alunos:\n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;
    if(media >= 7 && media <= 8){
        media = media + 1;
    } else if (media > 8){
        media = 10;
    }

    printf("MEDIA DO ALUNO: %f\n", media);
    printf("Aluno do turno %c\n", turno);

    if(turno == 'm'){
        printf("Aluno do matutino\n");
    }else if(turno == 'n'){
        printf("Aluno do noturno\n");
    }else{
        printf("Turno digitado é inválido!!!\n");
    }

    if(media < 7){
        printf("reprovado\n");
    } else {
        printf("aprovado\n");
    }
    return 0;
}