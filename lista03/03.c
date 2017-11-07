#include <stdio.h>

int soma_vetores(int v1[], int v2[], int v3[]){
    int i;
    for(i = 0; i<5; i++){
        v3[i] = v1[i] + v2[i];
    }
    return v3;
}

int main()
{
    int i, n = 5;
    int v1[n], v2[n], v3[n];
    for(i = 0; i<n; i++){
        scanf("%d", &v1[i]);
    }
    for(i = 0; i<n; i++){
        scanf("%d", &v2[i]);
    }
    soma_vetores(v1, v2, v3);
    for(i = 0; i<n; i++){
        printf("%d ", v3[i]);
    }
    return 0;
}
