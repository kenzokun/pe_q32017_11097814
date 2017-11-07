#include <stdio.h>

int cont_vogal(char *palavra){
    int n = 0;
    char *p, *v, *vogais = "aeiou";
    for(p = palavra; *p != '\0'; ++p){
        for(v = vogais; *v != '\0'; ++v){
            if(*p == *v) ++n;
        }
    }
    return n;
}

int main()
{
    char entrada [255];
    fgets(entrada, 255, stdin);
    printf("%d\n", cont_vogal(entrada));
    return 0;
}
