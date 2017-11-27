#include <stdio.h>
#include <math.h>

int main(){
	double a = 1, b = 1/sqrt(2), t = 0.25, p = 1, a1;
	int i;

	for(i = 0; i < 10; i++){
		a1 = (a + b)/2;
		b = sqrt(a*b);
		t = t - p*pow(a - a1, 2);
		p = 2*p;
		a = a1;
	}

	printf("%.20f", pow(a + b, 2)/(4*t));
	return 0;
}
