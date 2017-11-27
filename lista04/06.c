#include <stdio.h>
#include <time.h>
#include <limits.h>

#define BIGNUM ULONG_MAX

typedef unsigned long int ulint;

ulint f1(ulint x1, ulint x2)
{
    if(x1 > x2){
        return 1;
    }
    return 0;
}

ulint f2(ulint x1, ulint x2)
{
    if((x1 >> x2) > 0){
        return 1;
    }
    return 0;
}

int main(void) {
  clock_t tempo_init, tempo_fim;
  double tempo_gasto;
  ulint soma = 0;
  int i;

  tempo_init = clock();
  for (i=0; i<BIGNUM; i++) {
    soma += f1(i, BIGNUM-i);
  }
  tempo_fim = clock();
  tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
  printf("Tempo gasto na versao normal: %lf\n", tempo_gasto);

  tempo_init = clock();
  for (i=0; i<BIGNUM; i++) {
    soma += f2(i, BIGNUM-i);
  }
  tempo_fim = clock();
  tempo_gasto = (double)(tempo_fim - tempo_init) / CLOCKS_PER_SEC;
  printf("Tempo gasto na versao bitwise: %lf\n", tempo_gasto);

  return 0;
}
