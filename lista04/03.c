
#include <stdio.h>

typedef struct aluno {
    char nome[100];
    int ra;
    float p1;
    float p2;
    float p3;
} aluno;

float calcular_media (aluno x){
    return(x.p1 + x.p2 + x.p3) / 3;
}

int main(){
    int i;
    char *fname;

    scanf("arquivo %s", &fname);
    FILE * lista_alunos = fopen(&fname, "r");
    FILE * media_alunos = fopen("media_alunos.txt", "w");
    aluno alunos[50] = {};

    for(i=0; i<50; i++){
        fscanf(lista_alunos, "%s %d %f %f %f\n", alunos[i].nome, &(alunos[i].ra), &(alunos[i].p1), &(alunos[i].p2), &(alunos[i].p3));
        fprintf(media_alunos, "%s %d %.2f %.2f %.2f %.2f\n", alunos[i].nome, alunos[i].ra, alunos[i].p1, alunos[i].p2, alunos[i].p3, calcular_media(alunos[i]));
    }

    fclose(lista_alunos);
    fclose(media_alunos);
    printf("arquivo media_alunos.txt");
    return 0;
}
