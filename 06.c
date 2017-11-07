#include<stdio.h>
#include<stdlib.h>

int cmpfunc (const void * a, const void *b) {
    return (*(int*)a - *(int*)b );
}

//mediana = valor que divide um conjunto de valores ordenados em partes iguais
void mediana(int n, int entrada[]){
    int meio = n/2;
    if(n%2){
        printf("%.2f\n",(float)entrada[meio]);
    }
    else{
        printf("%.2f\n",(float)entrada[meio-1]);
    }
}

int main()
{
    int n, i;
    scanf("%i", &n);
    int entrada[n];
    for(i = 0; i<n; i++){
        scanf("%d", &entrada[i]);
    }
    qsort(entrada, n, sizeof(int), cmpfunc);
    mediana(n, entrada);
    return 0;
}
