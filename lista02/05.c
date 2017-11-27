#include <stdio.h>
#include <math.h>

unsigned int fatorial(unsigned int n){
	unsigned int x = 1;
	int i;

	for(i = n; i > 0; i--){
		x *= i;
	}

	return x;
}

unsigned int binomial(unsigned int n, unsigned int k){
	return fatorial(n) / (fatorial(k)*fatorial(n - k));
}

int main(){
	int n, k;

	scanf("%d %d", &n, &k);

	printf("%d\n", binomial(n, k));
	return 0;
}
