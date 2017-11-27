#include <stdio.h>
#include <math.h>

typedef struct ponto {
    float x, y, z;
} ponto;

float calcular_distancia(ponto *a, ponto *b){
    float distancia;

    distancia = sqrt(pow((b->x - a->x),2) + pow((b->y - a->y),2) + pow((b->z - a->z),2));

    return distancia;
}

int main()
{
    ponto a, b;

    scanf("%f, %f, %f", &(a.x), &(a.y), &(a.z));
    scanf("%f, %f, %f", &(b.x), &(b.y), &(b.z));

    printf("%.2f", calcular_distancia(&a, &b));
}
