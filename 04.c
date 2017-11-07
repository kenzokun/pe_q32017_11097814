#include <stdio.h>

void transp_matriz(int n, int matriz[n][n]){
    int i, j;
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    int i, j, n = 3;
    int matriz[n][n];
    for(i = 0; i<n; i++){
        for(j = 0; j<n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    transp_matriz(n, matriz);
    return 0;
}
