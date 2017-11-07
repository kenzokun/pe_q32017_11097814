#include <stdio.h>
#include <stdlib.h>

void cont_repet(int n, int entrada[]){
    int aux[n], i, j, num_dif = 0;

    for(i = 0; i<n; i++){
        int cont = 1;
        j = i+1;

        if(!conferir_vetor(entrada[i], n, aux)){
            aux[num_dif] = entrada[i];
            ++num_dif;
            while(j < n){
                if(entrada[i] == entrada[j]){
                    ++cont;
                }
                ++j;
            }
            if(cont >= 2) printf("%d-%d ", entrada[i], cont);
        }
    }
}

int conferir_vetor(int x, int n, int aux[]){
    int i = 0, cont = 0;
    while(i < n){
        if(x == aux[i]) return 1;
        i++;
    }
    return 0;
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int entrada[n];
    for(i = 0; i<n; i++){
        scanf("%d", &entrada[i]);
    }
    cont_repet(n, entrada);
    return 0;
}
