#include <stdio.h>

void inverter(char *palavra){
    int tamanho = 0;
    char *p = palavra;
    while(p[tamanho] != '\0'){
        ++tamanho;
    }
    while(tamanho>=0){
        printf("%c", palavra[tamanho]);
        --tamanho;
    }
}

int main()
{
    char entrada [255];
    fgets(entrada, 255, stdin);
    inverter(entrada);
    return 0;
}
